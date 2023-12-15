#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
/*
learn padding and greedy alignment
*/
class Hero
{
public:
    char name[100];
    char level;
    /*
    By default each and every member in cpp is private, we have to define
    them as public to access outside the class.


    */
    Hero() // Default Constructor
    {
        cout << "Calling Constructor" << endl;
    }
    Hero(int health)
    {
        cout << "This-> " << this << endl;
        this->health = health;
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level = level;
    }
    void print()
    {
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
    }
    Hero(Hero& temp)
    {
        cout<<"Calling copy constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
    /*
    "this" keyword points to the latest object being invoked which
    will be automatically called as the above is a constructor.
    This-> 0x623cdffb80
    Address :0x623cdffb80
    60
    100
    Calling Constructor
    level is :A
    health is :50
    Through this output it can be verified what is initialized to
    this keyword!

    Note::Once we make a parametrized constructor, the default constructor
    of the compiler dies out.

    */

private:
    int health;
    /*
    How do I access private members of my class
    This is achieved using getters and setters

    */
public:
    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health = h;
    }
};
int main()
{
    Hero suresh(70,'C');
    Hero Ramesh(suresh);
    Ramesh.print();
    /*
    This is using copy constructor, its provided by default by the
    compiler. We can create our own copy constructor too
    Lets try that
    
    */










    Hero h1(60); // Static allocation
    cout << "Address :" << &h1 << endl;
    cout << h1.gethealth() << endl;
    h1.sethealth(100);
    cout << h1.gethealth() << h1.name << h1.level << endl;

    Hero *h = new Hero; // Dynamic Allocation
    h->level = 'A';
    h->sethealth(50);
    cout << "level is :" << h->level << endl;
    cout << "health is :" << h->gethealth() << endl;

    return 0;
}