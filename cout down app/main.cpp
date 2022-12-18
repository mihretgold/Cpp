#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1;
    do{
      cout << n << endl;
   if(n%5==0)
   {
     cout<<"Beep"<<endl;
       }
      n--;
       } while(n>0);
    return 0;
}
