#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string ff = "This is content of 1st file";
    istringstream first(ff);
    ostringstream sec;
    char ch;
    while (first.get(ch)){
        sec.put(ch);
    }
    
    cout<<"Copied statement from 1st file:\n";
    cout<<sec.str();
    return 0;
}