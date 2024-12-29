#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;
    int timeToComplete;

    Hero()
    {
        cout << "simple Constructor called" << endl;
        name = new char[100];
    }

    // parametrized constructor

    Hero(int health)
    {
        cout << "this->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor
    // Hero(Hero& temp) {
    // this->health=temp.health;
    // this->level=temp.level
    // }

    void print()
    {

        cout << endl;
        cout << "Name:" << this->< name << ",";
        cout << "health:" << this->health << ",";
        cout << "level:" << this->level << "]";
        cout << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Hero a;

    // Hero *b= new Hero();
    // delete  b;

    // return 0;
    //
}

// Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('D');
// char name[7]='Somya';
// hero1.setNmae(name);

// hero1.print();

// //use default copy constructor
// Hero hero2(hero1);
// hero1.name[0]='G';
// hero1.print();

// hero2.print();

// hero1=hero2;

// hero1.print();

// hero2.print();

// Hero S(70, 'C');
// S.print();

// Hero R(S);
// R.print();

// //object created stastically
//    Hero ramesh(10);
// // cout<<"Address of ramesh" <<&ramesh<<endl;
// ramesh.print();

// //dyanamically
// Hero *h=new Hero(11);
// h->print();

// Hero temp(22,'B');

//     cout<<"Ramesh health is" <<ramesh.getHealth()<<endl;
//    ramesh.setHealth(70);
//     ramesh.level='A';

// cout<<"health is:" << ramesh.health<<endl;
// cout<<"level is:"<< ramesh.level<<endl;

//    // cout <<"size:" <<sizeof(h1)<< endl;

//     return 0;
