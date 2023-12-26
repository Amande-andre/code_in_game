/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: j <j@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:23:50 by j                 #+#    #+#             */
/*   Updated: 2023/12/26 15:51:09 by j                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void nearMonster(Creature Mstr, Drone drone)
{
	int min;
	int max;
	if (Mstr.getType() == -1)
	{
		if (Mstr.getX() < drone.getX())
		{
			min = Mstr.getX();
			max = drone.getX();
		}
		else
		{
			max = Mstr.getX();
			min = drone.getX();
		}
		if (max - min <= 500)
		{
			std::cerr << "troubles" << std::endl;
		}
	}
}
