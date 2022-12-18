#include <iostream>

using namespace std;

int main()
{
    float mid, assi, fin, total;
    cout << "Enter mid " << endl;
    cin >> mid;
    cout << "Enter assignment " << endl;
    cin >> assi;
    cout << "Enter final " << endl;
    cin >> fin;
    total = mid + assi + fin;
    if(total >= 85 && total <=100 && mid <= 30 && assi <= 20 && fin <= 50)
    {
        cout << "Grade A " << endl;
    }
    else if(total >= 75 && mid <= 30 && assi <= 20 && fin <= 50)
    {
        cout << "Grade B " << endl;
    }
    else if(total >= 65 && mid <= 30 && assi <= 20 && fin <= 50)
    {
        cout << "Grade c " << endl;
    }
    else if(total >= 40 && mid <= 30 && assi <= 20 && fin <= 50)
    {
        cout << "Grade D" << endl;
    }
    else if(total < 40 && mid <= 30 && assi <= 20 && fin <= 50)
    {
        cout << "Grade F " << endl;
    }
    else
    {
        if(mid > 30 && assi > 20 && fin > 50){
            cout << "Invalid Mid, Assignment and Final" << endl;
        }
        else if(mid > 30 && assi > 20){
            cout << "Invalid Mid and Assignment" << endl;
        }
        else if(mid > 30 && fin > 50){
            cout << "Invalid Mid and Final" << endl;
        }
        else if(assi > 20 && fin > 50){
            cout << "Invalid Mid and Final" << endl;
        }
        else if(mid > 30)
        {
            cout << "Invalid mid" << endl;
        }
        else if(assi > 20)
        {
            cout << "Invalid Assignment" << endl;
        }
        else if(fin > 50)
        {
            cout << "Invalid Final" << endl;
        }
        else{
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}
