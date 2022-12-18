#include <iostream>

using namespace std;

int main()
{
   /* int myArray [ 20];
    for(int i=0; i<20; i++){
    myArray[i] = 10 + (i*i);
    cout << myArray[i] << endl;
    }*/
    const int _msize= 5;
    int array[5];
    int sum = 0;
     cout << _msize << endl;
    cout << "Enter 5 numbers" << endl;
    /*for(int i = 0; i<5; i++){
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << sum << endl;*/

    for(int i = 0; i<5; i++){
        cin >> array[i];
    }
    for(int i = 4; i>=0; i--){
        cout << array[i] << endl;
    }

    return 0;
}
