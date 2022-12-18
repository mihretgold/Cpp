#include <iostream>

using namespace std;

int main()
{

   int sum =0;
   int x,y;
    cout << "Enter size of row and colomn" << endl;
    cin >> x >> y;
    int age[x][y];
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cin >> age[i][j];
        }
    }
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cout << age[i][j]<<"\t";
        }
        cout << endl;
    }


  /* int x,y;
    cout << "Enter size of row and colomn" << endl;
    cin >> x >> y;
    int age[x][y];
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cin >> age[i][j];
        }
    }
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cout << age[i][j]<<"\t";

        }
        cout << endl;
    }
    for(int i= 0; i < x; i++){
             int sum = 0;
        for(int j=0; j< y; j++){
                sum += age[i][j];
        }
        cout << "Row sum is: " << sum <<endl;
        }*/
    /*int x,y;
    cout << "Enter size of row and colomn" << endl;
    cin >> x >> y;
    int age[x - 1][y -1];
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cin >> age[i][j];
        }
    }
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cout << age[i][j]<<"\t";

        }
        cout << endl;
    }
    int j;
    int sum[j];
    for()
    for(int i= 0; i < x; i++){
    int sum[y];
        for(int j=0; j< y; j++){

                sum[y] += age[i][j];
        }

        }
/*int x,y;
    cout << "Enter size of row and colomn" << endl;
    cin >> x >> y;
    int age[x][y];
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cin >> age[i][j];
        }
    }
    for(int i= 0; i < x; i++){
        for(int j=0; j< y; j++){
                cout << age[i][j]<<"\t";

        }
        cout << endl;
    }
    for(int j= 0; j < y; j++){
             int sum = 0;
        for(int i=0; i< x; i++){
                sum += age[i][j];
        }
        cout << "Column sum is: " << sum <<endl;
        }
*/
    return 0;
  }
