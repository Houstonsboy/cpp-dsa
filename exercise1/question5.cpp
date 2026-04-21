#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 20;
    int i = 10; 
    while (i > 0) {
        y = y - 4;
        
        //prevents division by zero
        if (y == 0) {
            break; 
        }
        x = (2 / y) + x;
        if (y < 6) {
            break; // break loop is condition iis met
        }
        i--; // Decrement i so the loop eventually ends
    }

    cout << "Final x: " << x << endl;
    return 0;
}