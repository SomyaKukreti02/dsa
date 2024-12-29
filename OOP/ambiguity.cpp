#include<iostream>
using namespace std;

class A {

public:
void sayHello() {
    cout<<"Heloooooo"<<endl;
}

void sayHello(char name) {
    cout<<"helllloooooo"<<name<<endl;
}

void sayHello(string name) {
    cout<<"helllloooooo"<<name<<endl;
}

};

int main() {

    A obj;
    obj.sayHello();



    return;
}