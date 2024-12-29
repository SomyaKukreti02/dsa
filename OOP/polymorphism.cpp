#include <iostream>
using namespace std;

class A {


};

class B {
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;

    }

    void operator+ (B &obj) {

        // int value1= this-> a;
        // int value2=obj.a;
        // cout<<"output" value2- value1<<endl;

cout<<"heyyy"<<endl;

    }
    void operator() () {
        cout<<"bracket is there"<<this->endl;
    }
};
class Animal {
    public:
    void speak() {
        cout<<"speaking"<<endl;
    }
}
c

int main() {

    B obj1, obj2;

    obj1.a=4;
    obj2.a=7;


    obj1+obj2;
}



