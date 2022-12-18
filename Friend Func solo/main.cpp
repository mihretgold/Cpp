#include <iostream>

using namespace std;

/*declaring a non-member function as a friend of
a class allows it to access the class' private
members.*/

class MyClass {
public:
    MyClass(){
    regVar = 0;
    }
private:
    int regVar;
    friend void someFunc(MyClass &obj);
  /*Note that when passing an object to the function,
    we need to pass it by reference, using the & operator.*/
};
void someFunc(MyClass &obj){
obj.regVar = 42;
cout << obj.regVar;
}

int main()
{
    MyClass obj;
    someFunc(obj);
    return 0;
}
