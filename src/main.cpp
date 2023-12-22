/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:16:07 by anmande           #+#    #+#             */
/*   Updated: 2023/12/22 15:36:56 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../includes/main.hpp"

using namespace std;

/**
 * Score points by scanning valuable fish faster than your opponent.
 **/

int main()
{
    int creature_count;
    cin >> creature_count; cin.ignore();
    Creature net[creature_count];
    for (int i = 0; i < creature_count; i++) {
        int creature_id;
        int color;
        int type;
        net[i].inst(creature_id, type);
        cin >> creature_id >> color >> type; cin.ignore();
        cerr << net[i].getId() << net[i].getType() << endl;
    }
    // game loop
    
    Drone tab[2];
    while (1) {
        int my_score;
        cin >> my_score; cin.ignore();
        int foe_score;
        cin >> foe_score; cin.ignore();
        int my_scan_count;
        cin >> my_scan_count; cin.ignore();
        for (int i = 0; i < my_scan_count; i++) {
            int creature_id;
            cin >> creature_id; cin.ignore();
        }
        int foe_scan_count;
        cin >> foe_scan_count; cin.ignore();
        for (int i = 0; i < foe_scan_count; i++) {
            int creature_id;
            cin >> creature_id; cin.ignore();
        }
        int my_drone_count;
        cin >> my_drone_count; cin.ignore();
        //creer les drones ici;
        for (int i = 0; i < my_drone_count; i++) {
            int drone_id;
            int drone_x;
            int drone_y;
            int emergency;
            int battery;
            cin >> drone_id >> drone_x >> drone_y >> emergency >> battery; cin.ignore();
            tab[i].setDrone(drone_x, drone_y, drone_id);
        }
        int foe_drone_count;
        cin >> foe_drone_count; cin.ignore();
        for (int i = 0; i < foe_drone_count; i++) {
            int drone_id;
            int drone_x;
            int drone_y;
            int emergency;
            int battery;
            cin >> drone_id >> drone_x >> drone_y >> emergency >> battery; cin.ignore();  
        }
        int drone_scan_count;
        cin >> drone_scan_count; cin.ignore();
        for (int i = 0; i < drone_scan_count; i++) {
            int drone_id;
            int creature_id;
            cin >> drone_id >> creature_id; cin.ignore();
        }
        int visible_creature_count;
        cin >> visible_creature_count; cin.ignore();
        for (int i = 0; i < visible_creature_count; i++) {
            int creature_id;
            int creature_x;
            int creature_y;
            int creature_vx;
            int creature_vy;
            cin >> creature_id >> creature_x >> creature_y >>\
                creature_vx >> creature_vy; cin.ignore();
            
            // below reset creatures variables
            
            for (int j = 0; net[j].getId() == creature_id; j++)
            {
                net[creature_id].setCreature(creature_x, \
                    creature_y, creature_vx, creature_vy);
                cerr << net[j].getId() << net[j].getType() << endl;
            }
        }
        int radar_blip_count;
        cin >> radar_blip_count; cin.ignore();
        for (int i = 0; i < radar_blip_count; i++) {
            int drone_id;
            int creature_id;
            string radar;
            cin >> drone_id >> creature_id >> radar; cin.ignore();
        }
        for (int i = 0; i < my_drone_count; i++) {

            // Write an action using cout. DON'T FORGET THE "<< endl"
            // To debug: cerr << "Debug messages..." << endl;
            tab[i].droneMvt();
            for (int j = 0; net[j].getType() == -1; j++)
            {
                cerr << net[j].getX() << "." << net[j].getY() << endl;
            }
            cout << "MOVE " << tab[i].getX() << " " << tab[i].getY() << " " << tab[i].lightOn() << " " << tab[i].lightOn() << endl; // MOVE <x> <y> <light (1|0)> | WAIT <light (1|0)>
        }
    }
}
