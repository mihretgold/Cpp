#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter number of cents" << endl;
    cin >> x;
    while(x > 0){
        if(x >= 25){
            x = x - 25;
            cout << "x - 25 = " << x << endl;
        }
        else if(x >= 15 && x < 25){
            x = x - 15;
            cout << "x - 15 = " << x << endl;
        }
        else if(x >= 10 && x < 15){
            x = x - 10;
            cout << "x - 10 = " << x << endl;
        }
        else if(x >= 5 && x < 10){
            x = x - 5;
            cout << "x - 5 = " << x << endl;
        }
        else{
            x = x - 1;
            cout << "x - 1 = " << x << endl;
        }
    }
    return 0;
}
