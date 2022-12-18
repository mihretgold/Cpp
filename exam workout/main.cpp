#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
struct student{
   float mid, fin, total;
   char grade;
}s[20];
//int size=0;
student accept(student s[]){
    ofstream file;
    file.open("letsdothis.txt", ios::app);
    if(!file){
        cout<<"File not opened\n";
    }
    else{


   for(int i=0; i<2; i++){
    midlabel:
    cin>> s[i].mid;
   if(s[i].mid <0 || s[i].mid>50){
    cout<< "invalid\n";
    goto midlabel;
   }
   finallable:
    cin>> s[i].fin;
   if(s[i].fin <0 || s[i].fin>50){
    cout<< "invalid\n";
    goto finallable;
   }
   s[i].total = s[i].mid + s[i].fin;
   if(s[i].total >= 80& s[i].total<= 100){
    s[i].grade ='A';
   }
   else if(s[i].total >= 70& s[i].total< 80){
    s[i].grade ='B';
   }
   else if(s[i].total >= 60& s[i].total<= 69){
    s[i].grade ='C';
   }
   else if(s[i].total >= 50& s[i].total<= 59){
    s[i].grade ='D';
   }
   else {
    s[i].grade = 'F';
   }
   file<< s[i].mid<<setw(10)<<s[i].fin<<setw(10)<<s[i].total<<setw(10)<<s[i].grade<<endl;
}
 file.close();
    }
return *s;
}
void display(student s[]){
    ifstream myfile("letsdothis.txt");
    string line;
    if(!myfile){
        cout<<"no file\n";
    }
    else{
for(int i=0; i<2; i++){

    while(!myfile.eof()){
        myfile>>s[i].mid>>s[i].fin>>s[i].total>>s[i].grade;
cout<< s[i].mid<<setw(10)<<s[i].fin<<setw(10)<<s[i].total<<setw(10)<<s[i].grade<<endl;
    }

}
    }
    }

int main()
{  int num;
    display(s);
    accept(s);

    return 0;
}
