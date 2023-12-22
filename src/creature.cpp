/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creature.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:16:42 by anmande           #+#    #+#             */
/*   Updated: 2023/12/22 15:30:14 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/creature.hpp"

Creature::Creature()
{
}

Creature::~Creature()
{
}

void Creature::inst(int id, int type)
{   
    this->_creature_id = id;
    this->_creature_type = type;
}

void Creature::setCreature(int x, int y, int vx, int vy)
{
    _creature_x = x;
    _creature_y = y;
    _creature_vx = vx;
    _creature_vy = vy;
}

int Creature::getId() const
{
    return (_creature_id);
}

int Creature::getType() const
{
    return (_creature_type);
}

int Creature::getX() const 
{
    return (_creature_x);
}

int Creature::getY() const 
{
    return (_creature_y);
}

// const int Creature::getVector()
// {
//     return(->_creature_)
// }