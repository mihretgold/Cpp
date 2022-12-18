#include <iostream>

using namespace std;

int main()

{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
cout << "Enter the 10 digits" << endl;
cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9;

    d10 = (1 *d1 + 2*d2 + 3*d3 + 4*d4 + 5*d5 + 6*d6 + 7*d7 + 8*d8 + 9*d9) % 11;

   cout << d10 << endl;
    return 0;
}
