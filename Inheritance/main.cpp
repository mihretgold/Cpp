#include <iostream>

using namespace std;
/*A derived class inherits all base class methods with
the following exceptions:
- Constructors, destructors
- Overloaded operators
- The friend functions */
// protected can be accessed in the derived classes
class Mother{
public:
    Mother(){
    cout <<"Mother ctor"<<endl;

    }
    ~Mother()

 {

  cout <<"Mother dtor"<<endl;

 }

    void sayHi(){
    cout << var;
    }
private:
    int var=0;
protected:
    int someVar;
};

class Daughter: public Mother
// all public members of the Mother class become public
//members of the Daughter class.
{
public:
   Daughter()

 {

  cout <<"Daughter ctor"<<endl;

 }

 ~Daughter()

 {

  cout <<"Daughter dtor"<<endl;

 }

};
int main()
{
    Daughter d;
   // d.sayHi();
    Mother m;

    return 0;
}
