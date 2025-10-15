#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;
int main(){
     int digits=0, space=0;
     
     string ff = "content: 12345";
     istringstream first(ff);
     char ch;
     while(first.get(ch)) {
        if (isdigit(ch)) 
        digits++;   
     else if (ch == ' '){
             space++;
         }
     }
     cout<<first.str();
    cout<<"\nDigits: "<<digits<<"\n";
    cout<<"Spaces: "<<space;
    return 0;
}