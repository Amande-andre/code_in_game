/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:35:27 by anmande           #+#    #+#             */
/*   Updated: 2023/12/19 11:14:01 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/drone.hpp"
#include <iostream>
#include <string>


Drone::Drone()
{
    this->_pos_x = 0;
    this->_pos_y = 0;
}

Drone::~Drone()
{
}

void Drone::setDrone(int x, int y, int id) {
    _pos_x += x;
    _pos_y += y;
    _id = id;
}

int Drone::getX()
{
    return (this->_pos_x);
}

int Drone::getY()
{
    return (this->_pos_y);
}

// void Drone::droneMvt(bool TRUE)
// {
    
// }

void Drone::setX(bool _bool)
{
    if (_bool)
        this->_pos_x += 400;
    else
        this->_pos_x -= 400;
}

void Drone::setY(bool _bool)
{
    if (_bool)
        this->_pos_y += 800;
    else
        this->_pos_y -= 800;
}
