/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: j <j@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:35:27 by anmande           #+#    #+#             */
/*   Updated: 2023/12/26 11:45:23 by j                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/drone.hpp"
#include <iostream>
#include <string>


Drone::Drone()
{
    this->_pos_x = 0;
    this->_pos_y = 0;
    this-> _up = 0;    
    this-> _down = 1;
    this-> _left = 1;
    this-> _right = 1;
	this-> _dodge = 0;
	this-> _light = 0;
}

Drone::~Drone()
{
}

void Drone::setDrone(int x, int y, int id) {
    _pos_x = x;
    _pos_y = y;
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

int Drone::getLight()
{
	return (this->_light);
}

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
        this->_pos_y += 600;
    else
        this->_pos_y -= 600;
}

void Drone::mvtUp()
{
    Drone::setY(_down);
}
void Drone::mvtDown()
{
    if (this->_pos_y >= 8500){
        this->_down = 0;
    }
    else if (this->_pos_y <= 500)
        this->_down = 1;
    Drone::setY(this->_down);
}
void Drone::mvtR()
{
    if (_pos_x >= 5000)
        _right = 1;
    else if ((_pos_x < 5000))
        _right = 0;
    if (_pos_x >= 8500)
        _right = 0;
    else if (_pos_x <= 2500)
        _right = 1;
    Drone::setX(_right);
}
void Drone::mvtL()
{
    Drone::setY(false);
}
void Drone::droneMvt()
{
    mvtDown();
    //mvtR();
    // if (this->_left)
    //     setX(true);
}

void Drone::lightOn()
{
    if (this->_pos_y >= 7500 && this->_pos_y <= 6900)
        this->_light = 1;
    if (this->_pos_y >= 4000 && this->_pos_y <= 4500)
        this->_light = 1;
    this->_light = 0;
}
