#include <iostream>
#include <math.h>
using namespace std;

double factorial(double n){
   double result= 1;
   for(int i=0; i<n; i++){
    result = pow(n*factorial(n-1),-1);
   }
   return 0;
}

int main()
{
    long double euler =2;
    long double counter =2;
    float epsilon =2;
    do{
        euler += pow(factorial(counter),-1);
        counter++;
    }while((euler +1)-euler >= epsilon);
    cout<< euler<<endl;
    return 0;
}
