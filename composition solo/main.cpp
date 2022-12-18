#include <iostream>
#include <string>
using namespace std;

class Birthday {
public:
    Birthday(int m, int d, int y)
    :month(m), day(d), year(y)
    {
    }
    void printDate(){
    cout << month << "/"<< day << "/" << year << endl;
    }
private:
    int month;
    int day;
    int year;

};
class Person{
public:
    Person(string n, Birthday b)
    : name(n), bd(b)
    {
    }
    void printPerson(){
    cout << name<< endl;
    bd.printDate();
    }
private:
    string name;
    Birthday bd;
};

int main()
{
    int x,y,z,b;
    cin>> x>> y >> z;
    Birthday bd(x,y,z);
    Person per("Mihret", bd);
    per.printPerson();
    return 0;
}
