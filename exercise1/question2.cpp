#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    cout<<"please enter radius of sphere: ";
    cin>>radius;
    double volume=((4.0/3.0) *(3.142))* pow(radius,3);
    cout<<"the volume of sphere is: "<<volume<<endl;
    return 0;
}