#include "Map.h"
#include <ctype.h>

#define RED "\033[41m"     /* Red */
#define GREEN "\033[42m"   /* Green */
#define BLUE "\033[44m"    /* Blue */
#define MAGENTA "\033[45m" /* Magenta */
#define CYAN "\033[46m"    /* Cyan */
#define RESET "\033[0m"

using namespace std;

int main(){
    /* initialize random seed: */
    srand (time(NULL));

    Map starterMap = Map();
    // initialize tiles
    starterMap.initializeMap();

    // demonstrate tiles = these numbers will show up to
    // this top lane corresponds to player 1
    for(int i = 0; i < 50; i++){

        cout << starterMap.getMapPos(0,i) << "1" << " " << RESET; 
    }

    cout << endl;

    // this bottom lane corresponds to player 2
    for(int i = 0; i < 50; i++){

        cout << starterMap.getMapPos(1,i) << "2" << " " << RESET; 
    }

    // // Use RESET to revert back to the default terminal text color when done
    cout << RESET << endl;

    return 0;
}
