/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:36:03 by anmande           #+#    #+#             */
/*   Updated: 2023/12/18 19:10:52 by anmande          ###   ########.fr       */
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
public:
    Drone();
    ~Drone();
    void setDrone(int x, int y, int id);
    void setDronePos(int x, int y);
    void setX(bool _bool);
    void setY(bool _bool);
    int  getX();
    int  getY();
};



#endif