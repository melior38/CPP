/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:23:15 by asouchet          #+#    #+#             */
/*   Updated: 2024/01/30 18:59:49 by asouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP


#include <iostream>
#include <vector>
#include <exception>
#include <cstdlib>



class PmergeMe
{
	public:
		template <typename T, typename U>
		static	T	ford_jhonson(const char **av)
		{
			T<int> *a;
			T<int> *b = dynamic_cast<std::vector<int> *>(a);
			T<int> *c = dynamic_cast<std::list<int> *>(a);
			if(b == (void *)0 && c == (void *)0)
			{
	        	std::cerr << "ERROR YOUSTON THERE IS A PROBLEM" << std::endl;
				return *a;
			}			
			if (PmergeMe::args_Handler(av))
			{
				std::cerr << "Args Error ! " << std::endl;
				return *a;
			}
			U pairs = PmergeMe::create_List(av);
			PmergeMe::swap_pairs(pairs);
			PmergeMe::sort_pairs(pairs);
		}

	private:
		template <typename T>
		static T	create_List(const char **av, int *straggler)
		{
			T arr;
			int size = -1;
			while (av[++size])
				;
			*straggler = av[size];
			for (int = 0; i < size; i+=2)
			{
				arr.push_back(std::pair<int,int>(atoi(av[i]), atoi(av[i + 1])));
			}	
			return arr;
		}
		
		template <typename T>
		static void	sort_pairs(T arr)
		{

		}

		template <typename T>
		static T	swap_pairs(T pairs)
		{
			for (typename T::iterator iter = pairs.begin(); iter != pairs.end(); iter++)
			{
				if ((*iter).first > (*iter).second)
				{
					int tmp = (*iter).first;
					(*iter).first = (*iter).second;
					(*iter).second = tmp;
				}
			}
			return pairs;
		}

		template <typename T>
		static	int	binary_search(T main, int value)
		{
			int size = nums.size();
			int low = 0;
			int high = size;
			int mid = (low + high) / 2;
			while(low != high)
			{
				if(nums[mid] == target)
					return mid;
				else
				{
					if(nums[mid] > target)
						high = mid;
					else
					low = mid;
				}
				if(high-low == 1)
					return low;
			}
        	return -1;
		}

		template <typename T>
		static	T		build_jacob_array(T pend)
		{

		}

		static bool	args_Handler(const char **av);
		static	int		jacobstahl(int index);
		PmergeMe(const PmergeMe &ref);
		PmergeMe &opertator=(const PmergeMe &ref);
		PmergeMe();
		~PmergeMe();
};

#endif