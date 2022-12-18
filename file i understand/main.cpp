#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

struct student{
 int roll; char name[25]; float marks; char grade;
}s,s1;
void getdata(){
  cout<<"\n\nEnter Roll : ";
  cin>>s.roll;
  cout<<"\nEnter Name : ";
  cin>>s.name;
  cout<<"\nEnter Marks : ";
  cin>>s.marks;
  float marks = s.marks;
   if(marks>=75) {s.grade = 'A'; }
   else if(marks>=60){s.grade = 'B'; }
    else if(marks>=50){s.grade = 'C'; }
     else if(marks>=40){s.grade = 'D'; }
      else{ s.grade = 'F'; }

}
int getrno(){
return s.roll;
}
void AddRecord(){
fstream outf;
outf.open("student.txt",ios::app|ios::binary);
getdata();
outf.write((char*)&s, sizeof(s));
outf.close();
}
void putData(){
cout<<"\n"<<s.roll;
cout<<"\t"<<s.name;
cout<<"\t"<<s.marks;

}
void modify(){
cout<<"\n"<<s.roll;
cout<<"\t"<<s.name;
cout<<"\t"<<s.marks;
cout<< "Enter new data\n";
char name[20]=" ";
float mks;
cout<<"New name: (Enter'.' to retain old):";
cin>>name;
cout<< "New marks:(Press -1 to retain z old):";
cin>>mks;
if(strcmp(name,".")!=0){
    strcpy(s.name,name);
}
if(mks != -1){
    s.marks=mks;
    s.marks = mks;
    if(s.marks>=75){s.grade = 'A';}
    else if(s.marks>=60){s.grade = 'B';}
     else if(s.marks>=50){s.grade = 'C';}
     else if(s.marks>=40){s.grade = 'D';}
    else{ s.grade = 'F'; }
}

}
void display(){
fstream inf;
 inf.open("student.txt", ios::in|ios::binary);
 cout<<"\n\tRoll\tName\tMarks\n";
 inf.read((char*)&s,sizeof(s));
 while(!inf){
        putData();
    inf.read((char*)&s,sizeof(s));
 }
 inf.close();
 }

int main()
{
    /*char str[80],c,d,ans;
    ofstream outfl("try.txt");
    do{
        cout<<"Please give the string: ";
        gets(str);   outfl<<str;
        cout<< "do u want to write more: <y/n> ";ans=getch();
    }while(ans=='y');
    outfl<<'\0';
    outfl.close();
    ifstream infl("try.txt");
    ofstream out("cod.dat");
    cout<<"reading from created file and copying to other file\n";
    infl.get(c);
    do{
        d=c+1;
        cout<< c<<d<<'\n';
        out.put(d);
        infl.get(c);
    }while(c!='\0');
    out<<'\0';
    infl.close();
    out.close();*/
    /*char ch='n';

    do{
        AddRecord();
        cout<<"\nwant to add<y/n>: ";
        cin>>ch;
    }while(ch=='y'|| ch=='Y');
    cout<<"\nData written successfully...";
    display();*/
   /* char ans ='y';
    fstream fio("marks.txt", ios::in|ios::out);
    while(ans =='y'){
        getdata();
        fio.write((char *)&s,sizeof(s));
        cout<<"want to enter more: ";cin>>ans;
    }
    int rno;     long pos;      char found='f';
    cout<<"Enter rollno of student whose record is to be modified: "; cin>>rno;
    fio.seekg(0);
    int size = sizeof(s);
    while(!fio.eof()){
        pos = fio.tellg();
        fio.read((char *)&s,size);
        if(getrno() == rno){
            modify();
            fio.seekg(pos);
            fio.write((char *)&s,size);
            found ='t';
            break;
        }
    }
    if(found=='f'){
        cout<<"\nRecord not found in the file..!!\n";
        cout<<"Press any key to exit...\n"; exit(2);

    }
    fio.seekg(0);
    cout<<"Now the file contains:\n";
    while(!fio.eof()){
        fio.read((char *)&s, size);
        putData();
    }
    fio.close();*/

/*
Write a program which prints a table listing the number of occurrences of the lower-case characters 'a' to 'z' in a file "Sheet5Ex5.cpp". Declare only one variable of type "ifstream", one variable of type "char", and two variables of type "int".
 The program should produce output such as the following
*/
/*ifstream input;
int counter;
char Char ='a';
char b;
input.open("sheet.txt");
if(input.is_open()){
    counter =0;
    for(int i=0;i<26; i++){
        counter =0;
        for(; input.get(b);){
            if(Char ==b){counter++;}
        }
        cout<<Char<<"\t\t"<< counter<<endl;
        Char++;
    }
    input.close();
}
else {
    cout<<"Coudn't open file\n";
}
*/










    return 0;
}
