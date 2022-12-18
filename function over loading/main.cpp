#include <iostream>

using namespace std;

void printNumber(int x){
     cout << "Integer " << x << endl;
}
void printNumber(float x){
     cout << "float " << x << endl;
}
int main()
{
   /* When overloading functions,
    the definition of the function must differ
    from each other by the types and/or the number
    of arguments in the argument list. */
    int a = 16;
    float b = 54.653;

    printNumber(a);
    printNumber(b);

    return 0;
}
