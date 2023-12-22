/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creature.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:16:58 by anmande           #+#    #+#             */
/*   Updated: 2023/12/22 15:21:27 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATURE_HPP

#define CREATURE_HPP

#include <string>

class Creature
{
private:
    int _creature_id;
    int _creature_type;
    int _creature_x;
    int _creature_y;
    int _creature_vx;
    int _creature_vy;
public:
    Creature();
    ~Creature();
    void   inst(int id, int type);
    void   setCreature(int x, int y, int vx, int vy);
    int    getId() const;
    int    getType() const;
    int    getX() const;
    int    getY() const;
    //int    getVector() const;
    
};




#endif
