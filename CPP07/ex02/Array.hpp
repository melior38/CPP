/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:36:44 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 11:36:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template< typename T = int >
class Array
{
	public:
	Array(){
		this->_array = NULL; 
		this->_size = 0;
	}

	Array(unsigned int n){
		this->_array = new T[n];
		this->_size = n;
	}

	~Array(){
		delete[] this->_array;
	}

	unsigned int getSize() const {
		return this->_size;
	}

	T	*getArray() const {
		return this->_array;
	}

	Array(Array<T> const &ref){
		T	*tmp = ref.getArray();
		for (unsigned int i = 0; i < ref.getSize(); i++)
			this->_array[i] = tmp[i];
		this->_size = ref.getSize();
	}

	Array<T>	&operator=(Array<T> const &ref)
	{
		T	*tmp = ref.getArray();
		if (this->_array)
			delete this->_array;
		this->_array = new T[ref.getSize()];
		for (unsigned int i = 0; i < ref.getSize(); i++)
			this->_array[i] = tmp[i];
		this->_size = ref.getSize();
		return *this;
	}

	class IndexException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("the probleme is that your trying accessing a non existent slot of the array !");
		};
	};

	T& operator[](int const id) const {
		if (id < 0 || id > static_cast<int>(this->_size))
			throw Array::IndexException();
		else
			return (this->_array[id]);
	}

	private:
	T *_array;
	unsigned int _size;

};

#endif