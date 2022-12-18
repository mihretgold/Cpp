#include <iostream>

using namespace std;

int main()
{
          int num1 = 5, num2 = 3, num3 = 2;
     num1  -= num2++; // 1=2 2=4
     num2  *= --num3; // 3=1 2 = 4
     bool num4 = num1 - num2;
     cout << num1 << num2 << num3<< num4 <<endl;

    return 0;
}
