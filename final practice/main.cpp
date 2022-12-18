#include <iostream>
#include <string.h>
using namespace std;
double g(int a, string b){
cout << a << b;
}
void f(int &a, float &b, int c);
int c =10;
int main()
{
    /*int n = 3;
    int setc[n]={1,2,3};
    int setA[3]={1,2,3};
    int setB[]={1,4,2,9};

    cout << setA[n-1]++;

   /* for(int i=0; i < 3; i++){
     for(int j= 0; j< 4; j++){
        if(setA[i] == setB[j]){
        break;
     }
     else{
        cout << setA[i];
      }
    }
    }
  /*  for(int i=0; i < 7; i++){
     for(int j= 0; j< i; j++){
        if((j%2)==0){
                cout<<"-"<<j<<"-";
        continue;
     }
     else{
        cout << (i+j);
      }
    }
    }*/
    /*char rep[2][20]={"Ya,te","na,js"};
    int articleCount[2][5]={{1,5,2,3,4},{6,7,8,9,0}};
    for(int i=0; i < 2; i++){
        cout << rep[i];
        cout<< "sdff";
        for(int j= 1; j< 4; j++){
            cout << setw(4)<< articleCount[i][j];
            cout << endl;
        }
    }*/
    /*int n = 15;
    bool flg = true;
    do{
        cout << n << " ";
        if(n%4==0 && n%3 != 0)
            flg=false;
        else
            n -=2;
    }while(n>5 && flg);
    cout << n << " " << flg;*/
    /*float q = 20;
    int p = 32, r=53;
    cout << p << " "<< q << r <<endl;
    f(p,q,r);
    cout << p << " "<< q << r <<endl;*/
   /* char a[][20] = {"Kenya", "Ethiopia"};
    cout << a[0][1] << " " << a[1]<< endl;*/
    /*for(int i=5; i > 0; i--){
     for(int j= 5; j >=i; j--){
     cout << j;
     }
     cout << endl;
     }*/
    /* cout <<g(8,"happy");*/
   /* int n;
    cin >> n;

    for(int i=1; i<=n; i++){
     if(n% i == 0){
     cout << i <<" ";
     }
    }*/
   /* int alpha[4];
    alpah[0]=5;
    cout << alpha[0];*/
    char str1[20]={"got"};
    char str2[20]={"you"};
    cout << strcat(str1,str2);
    return 0;
}
void f(int &a, float &b, int c){
  a=a+3*c;
  b=b+3*c;
  c=c+3*c;
  cout << a << " " << b << " " << ::c<<endl;
}
