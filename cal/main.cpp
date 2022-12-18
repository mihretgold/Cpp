#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char op;
    cout << "Enter number" << endl;
    cin >> num1>> op >> num2;
    switch(op){
 case '+':
    cout << "= " << num1 + num2;
    break;
 case '-':
    cout << "= " << num1 - num2;
    break;
 case '*':
    cout << "= " << num1 * num2;
    break;
 case '/':
    cout << "= " << num1 / num2;
    break;
 case '%':
    cout << "= " << num1 % num2;
    break;
 default:
    cout << "Invalid operator try again" << endl;

    }

    return 0;
}
