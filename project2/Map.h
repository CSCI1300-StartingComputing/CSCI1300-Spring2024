#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>

using namespace std;

class Map{
    public:

    // Constructor
    Map();
    
    // Parametrized Constructor
    Map(int players_num, int size);

    //Setter-Getter pair for position on map
    void setMapPos(string value, int playerID, int index);
    string getMapPos(int playerID, int index);

    // STUDENTS: Make changes to this function to produce correct ratios of tiles
    // THE CURRENT IMPLEMENTATION DOES NOT GIVE YOU THE CORRECT RATIOS
    // The last tile for each player should be a different color to represent Ithaca 
    // See the defines above for color options
    void initializeMap();

    private:
    // 2 is there as there are 2 players
    // 50 is there as there are 50 tiles for a player's lane = 100 total tiles
    // Note: This array holds STRINGS that have been defined above
    string m_mapArr[2][50] = {};
};

#endif