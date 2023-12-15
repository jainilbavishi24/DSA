#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
/*
learn padding and greedy alignment
*/
class Hero
{
public:
    char *name;
    char level;
    /*
    By default each and every member in cpp is private, we have to define
    them as public to access outside the class.


    */
    Hero() // Default Constructor
    {
        cout << "Calling Constructor" << endl;
        name = new char[100];
    }
    Hero(int health)
    {
        cout << "This-> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void print()
    {
        cout << endl;
        cout << "Name " << this->name << ",";
        cout << "health " << this->health << ",";
        cout << "level " << this->level << endl;
    }
    Hero(Hero &temp)
    {
        //cout << "Calling copy constructor" << endl;
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health = temp.health;
        this->level = temp.level;
    }

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
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};
int main()
{

    Hero hero1;
    hero1.sethealth(12);
    hero1.level = 'D';
    char name[7] = "Jainil";
    hero1.setName(name);
    hero1.print();
    // Use Default copy constructor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'M';
    hero2.print();

    /*
    hero2 is printing Mainil whereas we didnt even changed it!
    This is known as Shallow copy
    This happens because we have created a pointer of name so changes
    directly occur on address!
    To solve this problem we have to use Deep Copy and we use our manual
    parameterized copy constructor for that.
    */
    hero1.print();
    return 0;
}