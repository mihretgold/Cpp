#include <iostream>

using namespace std;
   void myFunction(int *x){
     *x = 100;
   }
int main()
{//passing by referance
    int var = 20;
    myFunction(&var);
    cout << var << endl;
    return 0;
    /*In general, passing by value is faster and more
    effective. Pass by reference when your function
    needs to modify the argument, or when you need to
    pass a data type, that uses a lot of memory and is
    expensive to copy.*/
}
