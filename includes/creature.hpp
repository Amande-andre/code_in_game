/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creature.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:16:58 by anmande           #+#    #+#             */
/*   Updated: 2023/12/20 18:13:56 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATURE_HPP

#define CREATURE_HPP

#include <string>

class Creature
{
private:
    int _creature_id;
    int _creature_x;
    int _creature_y;
    int _creature_vx;
    int _creature_vy;
public:
    Creature(/* args */);
    ~Creature();
};

Creature::Creature(/* args */)
{
}

Creature::~Creature()
{
}


#endif
