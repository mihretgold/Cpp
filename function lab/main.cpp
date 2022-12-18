#include <iostream>

using namespace std;
int sum(int x, int y){
 int result = x + y;
 return result;
}
int sub(int x, int y){
 int result = x - y;
 return result;
}
int multi(int x, int y){
 int result = x * y;
 return result;
}
int Div(int x, int y){
 int result = x / y;
 return result;
}
int Mod(int x, int y){
 int result = x % y;
 return result;
}
int Max(int x, int y, int z){
    int result;
    if(x>= y && x >= z){
        result = x;
    }
    else if(y >= x && y >= z){
        result = y;
    }
    else {
        result = z;
    }
  return result;
}
int Min(int x, int y, int z){
        int result;
    if(x<= y && x <= z){
        result = x;
    }
    else if(y <= x && y <= z){
        result = y;
    }
    else {
        result = z;
    }
  return result;

}
int fact(int n) {

  if (n==1 || n == 0) {

    return 1;

  }

  else {

    return n * fact(n-1);

  }

}
string grade(int mark){
    string result;
    if(mark >= 91 && mark <= 100){
            result = "A+";
    }
    else if(mark >= 85 && mark <= 90){
            result = "A";
            }
    else if(mark >= 75 && mark <= 84){
            result = "B+";
            }
    else if(mark >= 65 && mark <= 74){
            result = "B";
            }
    else if(mark >= 55 && mark <= 64){
            result = "C";
            }
    else if(mark >= 50 && mark <= 54){
            result = "D";
            }
    else {
        result = "F";
    }
    return result;
}



int main()
{
    int choice;
    cout << "**********Welcome Choose a function************ " << endl;
    cout << "1) Calculator" << endl;
    cout << "2) Maximum or Minimum" << endl;
    cout << "3) Factorial" << endl;
    cout << "4) Grade" << endl;
    cout << "5) Exit" << endl;
    cin >> choice;
    switch(choice){
   case 1: int num1, num2;
          cout << "Enter two numbers" << endl;
          cin >> num1 >> num2;
          cout << " Which Operation Would you like" << endl;
          cout << "1) Addition" << endl;
          cout << "2) Subtraction" << endl;
          cout << "3) Multiplication" << endl;
          cout << "4) Division" << endl;
          cout << "5) Modulus" << endl;
          cout << "6) Exit" << endl;
          int second;
          cin >> second;
          switch(second){
        case 1:
         cout << sum(num1, num2);
        break;
        case 2:
          cout << sub(num1, num2);
        break;
        case 3:
         cout << multi(num1, num2);
        break;
        case 4:
         cout << Div(num1, num2);
        break;
        case 5:
         cout << Mod(num1, num2);
        break;
        case 6:
            return 0;
         default:
        cout << "Invalid Input" << endl;
          }
          break;
        case 2:
            int i, j, k;
          cout << "Enter three numbers" << endl;
          cin >> i >> j >> k;
          cout << " Which Operation Would you like" << endl;
          cout << "1) Maximum" << endl;
          cout << "2) Minimum" << endl;
          int third;
          cin >> third;
          switch(third){
      case 1:
         cout << Max(i, j, k);
        break;
        case 2:
         cout << Min(i, j, k);
        break;
        default:
        cout << "Invalid Input" << endl;
          }
          break;
        case 3:
            int m;
            cout << "Enter a number" << endl;
            cin >> m;
            cout <<  fact(m);
            break;
        case 4:
            int o;
            cout << "Enter your mark" << endl;
            cin >> o;
             cout << grade(o);
            break;
        case 5:
            return 0;
        default:
            cout << " Invalid Input" << endl;

    }

    return 0;
}
