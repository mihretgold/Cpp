#include <iostream>
#include <math.h>
/*Write a program which inputs a positive integer n
 and outputs 2 raised to the power of n
  (Hint: use pow() function from math.h).*/
/*Write a program which inputs three numbers and
outputs the message Sorted if the numbers are in
 ascending order, and outputs Not sorted otherwise.
  (Hint: use conditional operator)*/

using namespace std;

int main()
{
   /* unsigned int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << pow(2, n) << endl;*/
    int i, j, k;
    cout << "Enter number" << endl;
    cin >> i >> j >> k;
    if(i < j && i < k && j < k){
        cout << i << j << k << endl;
    }
    else {
        cout << "Not sorted" << endl;
    }
    return 0;
}
