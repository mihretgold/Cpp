#include <iostream>

using namespace std;

void maxmin (){
   int maxi, mini;
   int arr[5];
   cout << "Enter numbers" << endl;
   for(int i = 0; i<5; i++){
    cin >> arr[i];
   }
   maxi = arr[0];
    for(int i = 0; i<5; i++){
    if (arr[i] > maxi){
        maxi = arr[i];
    }
   }
   mini = arr[0];
    for(int i = 0; i<5; i++){
    if (arr[i] < mini){
        mini = arr[i];
    }
   }
   cout << "Maximum = " <<maxi<< endl;
   cout << "Minimum = " <<mini;
}
int prime(int num){
   for(int i=2; i < num/2; i++){
    if(num % i == 0){
        return 0;
    }

   }
   return 1;
}
void printPrime(int lowerLimit, int upperLimit){
while(lowerLimit <= upperLimit){
    if (prime(lowerLimit)){
        cout << lowerLimit << " , ";
    }
    lowerLimit ++;
}
}



int main()
{
    //cout << "C program to find maximum and minimum using functions" << endl;
   // maxmin();
   /* cout << "C program to find prime numbers using functions" << endl;
  int num;
  cin >> num;
   if (prime(num)){
    cout << "Prime";
   }
   else{
    cout << "Not Prime";
   }*/
   int a,b;
   cout << "C program to find prime numbers between two numbers using functions" << endl;
    cout <<"Enter Lower and Upper limit " << endl;
    cin >> a >> b;
    printPrime(a,b);




    return 0;
}
