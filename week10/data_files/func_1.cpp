#include <iostream>

using namespace std;

void testFunc(int a) {
    if (a == 0) {
        return;
    }
    if (a < 50) { if (a > 10) {
            cout << "It is < 50 and > 10" << endl;
        } else if (a < 10) {
            cout << "It is < 50 and < 10" << endl;
        }
    } else if (a > 50 && a < 100){
        cout << "It is > 50 and < 100" << endl;
    } else {
        cout << "It is > 100" << endl;
    }

    for (int i = 0; i < 10; ++i) { cout << i; }
    while (1 < 2) { cout << "1 < 2"; break; }

    return;
}
