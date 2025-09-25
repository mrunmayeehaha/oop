/MULTIPLE INHERITANCE
#include <iostream>
using namespace std;

class marks1 {
public:
int a;
    void getdata() {
        cout << "Enter marks for subject 1: ";
        cin >> a;
    }
    int getMarks1() {
        return a;
    }
};

class marks2 {
public:
int b;
    void get() {
        cout << "Enter marks for subject 2: ";
        cin >> b;
    }
    int getMarks2() {
        return b;
    }
};

class avg : public marks1, public marks2 {
    float average;
    public:
    void calc() {
        average = (getMarks1() + getMarks2()) / 2;
    }
    void display() {
        cout << "Average is " << average;
    }
};

int main() {
    avg obj;
    
    obj.getdata();
    obj.get();
    obj.calc();
    obj.display();
    return 0;
}