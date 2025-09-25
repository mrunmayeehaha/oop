//SINGLE INHERITANCE
#include <iostream>
#include <string>
using namespace std;
class flower{
    string a;
    public:
    void getdata(){
        cout<<"Enter flower name: ";
        cin>>a;   }
    void display(){
        cout<<"In base class: "<<a<<"\n";
    }
};
class rose: public flower{
    string b;
    public:
    void get(){
        cout<<"Enter another flower: ";
        cin>>b;
    }
    void show(){
        cout<<"In derived class: "<<b;
       }
    };
int main() {
   rose obj;
    obj.getdata();
    obj.display();
    obj.get();
    obj.show();
    return 0;
}