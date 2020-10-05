#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    int i, j, k;
    int t0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++) {
                cout << "\r" << i << j << k;
                cout.flush();
                t0 = time(0);
                while (t0 == time(0)) {}
            }
        }
    }
    return 0;
}