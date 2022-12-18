#include <iostream>

using namespace std;

int main()
{
    /*int a = 21, c ;

   c = a++;   //postfix increment
   cout<<"Value of c after assigned a++ is :"<<c<<endl;
          cout<<"Value of a is  after a++:" << a << endl ;

        c = ++a;  //prefix increment
   cout << "Value of c after assigned ++a is :"<<c<<endl;
   cout<<"Value of a is  after ++a:" << a << endl ;
*/
   int a = 21, c ;
   a++; //postfix increment
   c = a;
   cout<<"Value of c after assigned a++ is :"<<c<<endl;
   cout<<"Value of a is  after a++:" << a << endl ;

	++a;  //prefix increment
    c = a;
   cout << "Value of c after assigned ++a is :"<<c<<endl;
   cout<<"Value of a is  after ++a:" << a << endl ;
    return 0;
}
