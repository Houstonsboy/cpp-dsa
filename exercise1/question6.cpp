#include <iostream>
#include <iterator>
using namespace std;

int main() {
     int i=0;
     int total=0;
     double average;
    int array[5];
     while (i<5){
        cout<<"please input array index "<<i<<": ";
        cin>>array[i];
         total=total+array[i];
         i++;
     }
    cout<<"the total is: "<<total<<endl;
    average=total/(size(array));
    cout<<"the total is: "<<average<<endl;

     return 0;
}