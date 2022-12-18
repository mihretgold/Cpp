#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class factor{
  public:
      int num;
      /*factor(int x){
      x=num;
      }*/
      void fact(){
cout<< "enter a number: "; cin>>num;
   for(int i=1; i<num; i++){
    if(num % i ==0){
        cout<< i<<endl;
    }
   }
      }

};
void func(char *p, char ch){
  int size;
  char ch1;
  while(*p != '\0'){
        if(*p == ch){
   size ++;
    }p++;}

  cout << size;
}
struct employee{
   char name[50];
   char id[20];
   char sex;
   float sal;
}e[5];
int main()
{
   //factor f;

   //f.fact();
  /* char p[50];
   char ch;
   cout<< "enter word then char : \n";
   cin>>p;
   cin.ignore();
   cout<< "enter char\n";
   cin>>ch;
   func(p,ch);*/
   ofstream file("defget50.txt", ios::app);
   if(!file){
    cout<<"File not open"<<endl;
   }
   else{
   for(int i=0; i<2;i++){

    cout<<"enter name/id/sex/salary\n";
   // cin.ignore();
    cin.getline(e[i].name,50);
     cin.getline(e[i].id,20);
      cin>>e[i].sex;
      cin>> e[i].sal;
   file<<e[i].name<<setw(10)<<e[i].id<<setw(10)<<e[i].sex<<setw(10)<<e[i].sal<<endl;
   }
   file.close();
    }
    ifstream myfile("defget50.txt");
    if(!myfile){
    cout<<"File not open"<<endl;
   }
   else{
   for(int i=0; i<2;i++){

    while(!myfile.eof()){

   myfile>>e[i].name>>e[i].id>>e[i].sex>>e[i].sal;
   cout<<e[i].name<<setw(10)<<e[i].id<<setw(10)<<e[i].sex<<setw(10)<<e[i].sal<<endl;
   }
   }
   myfile.close();
    }


    return 0;
}
