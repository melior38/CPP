/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:45:28 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 17:45:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int main(void)
{
	Harl american_dude;

	american_dude.complain("debug");
	american_dude.complain("info");
	american_dude.complain("warning");
	american_dude.complain("error");
	return (0);
}