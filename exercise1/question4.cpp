#include <iostream>
#include <cctype>
using namespace std;

void CapsChecker(char c){
    if(isupper(c)){
        cout<<"The character is an uppercase letter."<<endl;
    }
    else{
        cout<<"The character is not an uppercase letter."<<endl;
    }
}
int main() {
    char c;
   cout<<"input the character to check: ";
   cin>>c;
   CapsChecker(c);
    return 0;
}