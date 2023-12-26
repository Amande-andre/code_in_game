/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: j <j@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:36:03 by anmande           #+#    #+#             */
/*   Updated: 2023/12/26 11:17:20 by j                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRONE_HPP

#define DRONE_HPP
#include <iostream>
#include <string>


class Drone
{
private:
    int _id;
    int _pos_x;
    int _pos_y;
    int _up;
    int _left;
    int _right;
    int _dodge;
	int	_light;
public:
    Drone();
    ~Drone();
    int _down;
    void setDrone(int x, int y, int id);
    void setDronePos(int x, int y);
    void setX(bool _bool);
    void setY(bool _bool);
    int  getX();
    int  getY();
	int	 getLight();
    void droneMvt();
    void mvtUp();
    void mvtDown();
    void mvtR();
    void mvtL();
    void lightOn();
};

#endif