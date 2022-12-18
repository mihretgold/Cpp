#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

  struct Student{
             int roll;
             char name[25];
             float marks;
    }stud;
    void getdata(){
    cout<<"\n\nEnter Roll: ";
    cin>> stud.roll;
    cout<< "\nEnter Marks: ";
    cin>> stud.marks;

    }
    void putData(){
    cout<<"\n"<<stud.roll;
    cout<<"\t"<<stud.name;
    cout<<"\t"<<stud.marks;
    }
    void AddRecord(){
    fstream outf;
    outf.open("Student.dat",ios::app|ios::binary);
    getdata();
    outf.write((char*)&stud,sizeof(stud));
    outf.close();
    }
    void Display(){
    fstream inf;
    inf.open("Student.dat", ios::in|ios::binary);
    cout<< "\n\tRoll\tName\tMarks\n";
    inf.read((char*)&stud, sizeof(stud));
    while(inf !=NULL){
        putData();
        inf.read(())
    }
    }

int main()
{
    /*ifstream mihret("mer.txt", ios::in);

    if(!mihret.is_open()){
        cout << "File could not be opened"<<endl;
        exit(1);
    }
    int account;
    char name[30];
    double balance;
    cout << "The User bank account details\n";
    cout << "Account\tName\tBalance\n";
    while(mihret.eof()== false){
        mihret>> account>> name>> balance;
        cout << account<< "\t"<< name<< "\t"<< balance<<endl;

    }
    mihret.close();*/

    /*char str[80], c,d, ans;
    ofstream outfl("try.txt");

   do{
        cout<<"Please give the string:";
        gets(str);  outfl<<str;
        cout<< "do you want to write more..<y/n>:"; ans = getch();
    }while(ans =='y');
    outfl<<'\0';
    outfl.close();
    // copying file content using get() and put() functions
    ifstream infl("try.txt");
    ofstream out("cod.txt");

    cout<< "reading from created file and copying to other file\n";
    infl.get(c);
    do{
        d=c+1;
        cout<< c<< d<<endl;
        out.put(d);
        infl.get(c);

    }while(c!='\0');
    out<< '\0';
    infl.close();
    out.close();*/

    // write to a binary file


    /*char ch='n';
    do{
        AddRecord();
        cout<<"\n want to add more(y/n):";
        getline(ch);
    }while(ch =='y'|| ch=='Y');
    cout<<"\nData written successfully...";*/








    return 0;
}
