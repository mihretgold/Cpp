#include <iostream>

using namespace std;

int main()
{
    int hr1,hr2, total;
    float pt1, pt2, qpt,GPA;
    char g1, g2;
    cout << "Enter the credit hour and grade of the first course" << endl;
    cin >> hr1 >> g1;
    cout << "Enter the credit hour and grade of the second course" << endl;
    cin >> hr2 >> g2;
    if(g1 == 'A'){
        pt1 = 4;
    }
    else if(g1 == 'B'){
        pt1 = 3;
    }
    else if(g1 == 'C'){
        pt1 = 2;
    }
    else if(g1 == 'D'){
        pt1 = 1;
    }
    else{
        pt1 = 0;
    }
    if(g2 == 'A'){
        pt2 = 4;
    }
    else if(g2 == 'B'){
        pt2 = 3;
    }
    else if(g2 == 'C'){
        pt2 = 2;
    }
    else if(g2 == 'D'){
        pt2 = 1;
    }
    else{
        pt2 = 0;
    }
    qpt = (hr1 * pt1) + (hr2 * pt2);
    total = hr1 + hr2;
    GPA = qpt/total;
    if(GPA <= 4 && GPA >= 3.5){
        cout << "your GPA is" << GPA << ": Distniction" << endl;
    }
    else if(GPA < 3.5 && GPA >= 2){
        cout << "your GPA is" << GPA << ": Satisfactory" << endl;
    }
    else if(GPA < 2){
        cout << "your GPA is" << GPA << ": Warning" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
