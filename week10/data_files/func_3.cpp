#include <iostream>

using namespace std;

void randomFunc()
{
    int a = 0, b = 0;

    do {
        a++;
        b++;
    } while (a < 10 && b < 10);

    // if (a > 20) {
    //     cout << "a > 20" << endl;
    // }

    if (a == 10) { // if (b == 10) {
        if (b == 10) {
            cout << "10 and 10" << endl;
        }
    }

    while (a <= 10) {
        // for (int i = 0; i < b; i++) {
        //     cout << b << " ";
        // }
        // cout << endl;
        for (int i = 0; i < b; i++) {
            cout << a + b << " ";
        }
        cout << endl;

        a--;
        b--;
    }
}
