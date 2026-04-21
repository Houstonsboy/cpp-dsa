#include <iostream>
using namespace std;

int perimeter(int length){
    int perimeter=4*length;
    return perimeter;
}
int area(int length){
    int area=length*length;
    return area;
}
int main() {
   cout<<"whats the length of one side of the square: ";
   int length;
   cin>>length;
   cout<<"the perimeter of the square of length "<<length<< " is "<<perimeter(length)<<endl;
   cout<<"the area of the square of length "<<length<< " is "<<area(length)<<endl;
   return 0;

}