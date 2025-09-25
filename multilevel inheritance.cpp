//MULTILEVEL INHERITANCE
#include <iostream>
using namespace std;


class marks1 {
public:
    int a;
    void input1() {
        cout << "Enter marks for subject 1: ";
        cin >> a;
    }
};


class marks2 : public marks1 {
public:
    int b;
    void input2() {
        cout << "Enter marks for subject 2: ";
        cin >> b;
    }
};


class avg : public marks2 {
public:
    void calcAndDisplay() {
        float average = (a + b) / 2; 
        cout << "Average is " << average;
    }
};

int main() {
    avg obj;
    obj.input1(); 
    obj.input2(); 
    obj.calcAndDisplay(); 
    return 0;
}