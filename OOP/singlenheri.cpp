#include <iostream>
using namesapce std;

class A {
    public:

void func() {
    cout<<"I am A"<<endl;
}
};

class B {
    public:

    void func() {
        cout<<"I am B"<<endl;
    }
};

class C: public A, public B {

}

int main() {
   C obj ;
   //obj.function();

obj.A::func();
obj.B::func();

    retrun 0;
}
