#include "Game.h"
#include <ctype.h>

using namespace std;

// The point of this file is to demonstrate what you could make to help test different parts of your code
// without necessarily having all parts implemented. 

// Ideally you test and work on the individual parts and add them in piece-by-piece, until you have the whole thing to place into its own driver file.

int main(){
    // initialize
    Game m_game;

    // print menu
    m_game.introMenu();
    // ask user for input
    // test file read in
    string filename = "characters.txt";
    m_game.loadEntities(filename);

    // ask user for their choice
    string userChoice;
    cout << "Which character would you like to choose? Enter a number." << endl;
    cout << "(1) Odysseus (2) Argos (3) Circe (4) Achilles" << endl;
    cin >> userChoice;
    
    // mild user input validation check - arguably could/should be more thorough
    if (isdigit(userChoice[0])){
        Entity player1 = m_game.getPlayer(stoi(userChoice) - 1);
        cout << player1.getName() << " chosen successfully! " << endl;
    }

    // Combat testing
    // let's say I haven't figured out how to connect things to the game's list of entities yet, but I want to get my combat function out of the way
    // I can still work on creating the general idea of my combat function and worry about putting it into everything later

    // here I am just manually creating some players to test with
    Entity player = Entity("Argos", 120.0, 100.0, 20.0, 'H', false, 'W', 50, false);
    Entity enemy = Entity("Sirens", 150.0, 100.0, 25.0, 'H', false, 'E', 25, true);
    
    // manually providing Equipment to each one
    // NOTE: your setEquipment should have more parameters than mine does
    player.setEquipment("Bow of Odysseus", 'W', 10.0);
    enemy.setEquipment("Lotus Staff", 'E', 10.0);

    // calling my combat function to test - output is in the GitHub under Combat
    m_game.combat(player, enemy);

    return 0;
}
