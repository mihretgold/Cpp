#include <iostream>

using namespace std;

int main()
{
   //#1
   /*int volt[10] = {89, 75, 82, 93, 78, 95, 81, 88, 77, 82};
   double per[100] = {6.95, 7.25, 7.35, 7.42};
   double tempre[64]= {78.2, 69.6, 68.5, 83.9, 55.4, 67.0, 49.8, 58.3, 62.5, 71.6};
   char codes[15]= {'f','j','m','q','t','w','z'};
   //2
   int num[4][5]= {16,22,99,4,18,-258,4,101,5,98,105,6,15,2,45,33,88,72,16,3};
    //3
    /*int temp[8];
    int i,sum=0;
    for(i=0; i<8; i++){
        cin>>temp[i];
        sum += temp[i];
    }
    for(i=0; i<8; i++){
        cout << temp[i]<< endl;
    }

    cout << sum/8;*/
    //4??
    /*int first [2][2]= {{1,2},{3,4}};
    int second [2][2]={{1,5},{6,3}};
    int total =0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(first[i][j] == second [i][j]){
                cout << first[i][j] << "\t";
                total+=first[i][j];
            }
            cout << endl;
        }
    }
    cout << total;*/
    //5
   /*double volt[9];
   for(int i=0; i<9; i++){
    cin>>volt[i];
   }
   for(int i=0; i<9; i++){
       if(i%3 ==0){
        cout<< endl;
       }
        cout<<volt[i]<< "\t";
    }
    //6
    /*int num;
    cout << "Enter number of students" <<endl;
    cin>> num;
    int Final[num];
     int Mid[num];
     int student[num];

    cout << "Enter Mid marks of students" <<endl;
    for(int i=0; i<num; i++){
            cout << i+1 << ") ";
        cin>>Mid[i];
    }
     cout << "Enter Final marks of students" <<endl;
    for(int i=0; i<num; i++){
            cout << i+1 << ") ";
        cin>>Final[i];
    }
     for(int i=0; i<num; i++){
           student[i] = Final[i] + Mid[i];
       }

    for(int i=0; i<num; i++){
        if(student[i] >= 80){
            cout<< Mid[i] <<"\t"<< Final[i]<<"\t" <<student[i] <<  "\tExcellent" <<endl;
        }
        else if(student[i] >= 60){
            cout<<Mid[i] <<"\t"<< Final[i]<<"\t" <<student[i] << "\tVery Good" <<endl;
        }
         else if(student[i] >= 50){
            cout<<Mid[i] <<"\t"<< Final[i]<<"\t" << student[i] << "\tFair" <<endl;
        }
         else if(student[i] >= 40){
            cout<<Mid[i] <<"\t"<< Final[i]<<"\t" << student[i] << "\tPoor" <<endl;
        }
         else {
            cout<< Mid[i] <<"\t"<< Final[i]<<"\t" <<student[i] << "\tFail" <<endl;
        }
    }*/
//7
  /* int arr[5];

   for(int i=0; i<5; i++){
    cin >> arr[i];
   }
    for(int i=4; i>=0; i--){
    if(arr[i]%2 == 0){
        cout<<arr[i]<< "\t";
    }
   }*/
//8
    /*int num, product, total = 0;
    cout<< "Enter Number of items"<<endl;
    cin>>num;
    int Quantity[num];
    int Price[num];
    int sum[num];
    for(int i=0; i<num; i++){
        cout << "Enter price of " << i+1<< " product"<<endl;
        cin>>Price[i];
        cout << "Enter  of quantity product"<<endl;
        cin >>Quantity[i];
        sum[i]=Quantity[i]*Price[i];
        total = total + sum[i];
        }
    for(int i=0; i<num; i++){
        cout << Price[i]<< "\t"<< Quantity[i]<<"\t"<< sum[i]<< endl;
        }
      cout <<"Total purchase = " << total;*/
//9
  /* int resistance[5]={16,27,39,56,81};
   double current[5];
   double power[5];
   cout <<"Enter value of current"<< endl;
   for(int i=0; i<5; i++){
    cin>>current[i];
    power[i]= current[i]*current[i]*resistance[i];
   }
   for(int i=0; i<5; i++){
    cout << power[i]<< "\t";
   }*/
   //2D ARRAY
   //1
/*int one [3];
    int two [3];
    cout << "Enter First array"<< endl;
     for(int i=0; i<3; i++){
        cin>>one[i];
     }
      cout << "Enter second array"<< endl;
     for(int i=0; i<3; i++){
        cin>>two[i];
     }
    for(int i=0; i<3; i++){

            if(one[i] == two[i]){
                cout << "Identical" << endl;
            }
            else {
                cout << "Not Identical"<<endl;
            }
    }*/
    //2
    /*int arr[2][2];

    for(int i=0; i<2; i++){
            for(int j=0; j< 2; j++){
              cin>>arr[i][j];
            }
      }
      for(int i=0; i<2; i++){
            int multi=1;
            for(int j=0; j< 2; j++){
              cout << arr[i][j]<< "\t";
              multi=multi*arr[i][j];
            }
            cout << multi;
      cout << endl;
      }
     for(int i=0; i<2; i++){
            int sum=0;
            for(int j=0; j< 2; j++){
              cout << arr[j][i]<< "\t";
              sum+=arr[j][i];
            }
            cout<< sum;
      cout << endl;
      }*/
      /*
      //3
      int num;
      cout << "Enter number of students you want to register"<<endl;
      cin>> num;
      double score[num][5];
      char status[10];
      cout << "Test\tAssignment\tQuiz\tProject\tFinal"<<endl;
      for(int i=0; i<num; i++){
        for(int j=0; j<5; j++){
           cout << i+1 <<") ";
           cin>>score[i][j];
        }
      }


      cout << "Test\tAssig\tQuiz\tProject\tFinal\tTotal\tStatus"<<endl;
      for(int i=0; i<num; i++){
            int sum=0;
        for(int j=0; j<5; j++){
           cout << score[i][j]<<"\t";
      sum+=score[i][j];
        }
        cout << sum<<"\t";
        if(sum >= 80){
          cout <<"Execelent";
        }
        else if(sum >= 60){
             cout <<"Very Good";
        }
         else if(sum >= 50){
             cout <<"Fair";
        }
         else if(sum >= 40){
             cout <<"Poor";
        }
         else {
            cout <<"Fail";
        }
        cout << endl;
      }
      */
      //4
      /*int arr[3][4];
      int sum=0;
       for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
           cin>>arr[i][j];
        }
      }
      for(int i=0; i<3; i++){
            //int sum=0;
        for(int j=0; j<4; j++){
            if(arr[i][j] % 2==0){
                cout <<arr[i][j]<< "\t";
                sum += arr[i][j];
            }
            else{
                cout <<"*"<< "\t";
            }

        }
        //cout << sum;
        cout <<endl;
      }
        cout << "Total Number of even numbers = "<<sum;
     */
     //6
     int arr[4][4];
     bool friends[4][4];
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
                cout << "Press 1 if "<< i<< " and "<< j<<" are friends and 0 if not"<< endl;
           cin>>freinds[i][j];
        }
      }
      for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
           if(friends == "True"){
            cout << "*\t";
           }
           else {
            cout << " \t";
           }
        }
      }

    return 0;
}
