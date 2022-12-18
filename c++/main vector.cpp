#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include <vector>
#include <sstream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;



/*struct phone_number{
	int area_code, exchange_code, line_number;
};*/

struct customers{
	char first_name[25];
	char last_name[25];
	char phone_number[20];
	int amount;//the fee paid
};
vector<customers>vec;
int size=0;
void load(){
ifstream read;
read.open("tele.txt");
//char current[100];

customers p;

while(!read.eof()){

   read >> p.first_name;
   read >> p.last_name;
   read >> p.phone_number;
   read >> p.amount;

}
read.close();
}
void save(){
   ofstream write;
   write.open("tele.txt");
   write<< "Name"<<"\t\t"<<"Phone Number\t\t" <<"Amount"<<endl;
   for(int i=0; i<vec.size();i++){
    write<<vec[i].first_name<<" "<< vec[i].last_name<<"\t"<<vec[i].phone_number<<"\t\t"<< vec[i].amount<<endl;
   }
   write.close();
   cout<<"\n \t Data Saved to file"<<endl;
}
void add()
{
	//fstream myfile;


	cout<<"*****************ENTER YOUR DATA HEAR*****************"<<endl;
	int num;
    vector<customers> *temp=&vec;
    cout<<"enter the number of telephones you want to pay for"<<endl;
    cin>>num;
    //getch(); exeptions
    //for (int i=size;i<num+size;i++){
            //cin.ignore();
    customers x;
    cout<<"ENTER FIRST NAME :";
	cin>>x.first_name;
	cout<<"ENTER LAST NAME :";
	cin>>x.last_name;
	cout<<"ENTER PHONE NUMBER :";
	cin>>x.phone_number;
	cout<<"ENTER THE AMOUNT :";
	cin>>x.amount;
	temp->push_back(x);
	save();
   //myfile.open("trial.txt",ios::out|ios::app);
	//myfile<<" "<<a[i].first_name<<" "<<a[i].last_name<<"\t"<<a[i].phone_number<<"\t"<<a[i].amount<<endl;

    //}
    //size+=num;

	//myfile.close();

}

void print(customers s) {

    cout << "Name/t/t " << "Phone Number\t\t"<< "Amount"<<endl;;
    cout << s.first_name<<" "<<s.last_name<<"/t/t"<<s.phone_number<<"\t\t"<< s.amount<<endl;
}

void display()
{
   string line;

    ifstream read;
    read.open("tele.txt");
    while (!read.eof()) {

        getline(read, line);
        cout<<line<<endl;

    }
    read.close();
}
void search(){


      string searchkey,line;
     ifstream read;

      cout<<"\nEnter the phone number of the customer you want to find"<<endl;//searches anything on file
      cin>>searchkey;
      read.open("tele.txt");
     customers p;
      cout<<"\nNAME\t\tPHONE NUMBER\tAMOUNT\n";
      while(getline(read,line)){
      size_t found = line.find(searchkey);
      if(found != string::npos)
        cout<<line<<endl;

   }
   read.close();
  }
 void modify(){//??
     ifstream myfile;
    myfile.open("trial.txt");

      string searchkey,line;

      //cin.ignore();
      if(!myfile){
        cout << "No file found please enter data"<<endl;

    }
      cout<<"\nEnter the phone number of the customer you want to find"<<endl;//searches anything on file
      cin>>searchkey;
      cin.ignore();
      size_t newPhone;
       //myfile1.open("trialnew.txt",ios::app|ios::out);
      //cout<<"\nNAME\t\tPHONE NUMBER\tAMOUNT\n";
      while(getline(myfile,line)){
      size_t found = line.find(searchkey);
      if(found != string::npos)
        cin.ignore();
      cout<<"\nEnter New phone number of the customer you want to find"<<endl;//searches anything on file
      cin >>newPhone;
      found = newPhone;
        cout<<"Phone number updated"<<endl;


   }
   myfile.close();
  }


  /*void deletes(){
  customers b;
  bool found = false;
  char searchkey[20];

ifstream myfile;
ofstream fwrite;
cout<<"ENTER PHONE NUMBER: ";
gets(searchkey);
cin.ignore();
fwrite.open("temp.txt");
myfile.open("trial.txt");
myfile>>a.first_name>>a.last_name>>a.phone_number>>a.amount;
while(!myfile.eof
      ())
         {
           if(strncasecmp(searchkey,a.phone_number,strlen(searchkey))== 0)
            {
              found=true;
              fwrite<<a.phone_number<<"\t"<<a.first_name
                <<"\t"<<a.last_name
                <<"\t"<<a.amount<<endl;
            }
           else
           {
             cout<<"\n\trecord deleted";
           }
           myfile>>a.first_name>>a.last_name>>a.phone_number>>a.amount;
         }
      myfile.close();
      fwrite.close();
      /*if (found==false)
      goto out;

      myfile.open("temp.txt");
      fwrite.open("student.txt");

      while(myfile)
         {
           fwrite<<b.phone_number<<"\t"<<b.first_name
                <<"\t"<<b.last_name
                <<"\t"<<b.amount<<endl;
         }
     fwrite.close();
     fread.close();
    // out:*/
     /*remove("trial.txt");
     rename("temp.txt","trial.txt");
     /*if(found==false)
     {

         cout<<"ID NOT FOUND \n";
         getch();
     }
     else
     {
         cout<<"DELETED SUCCESSFULLY ...\n";
         getch();
         }
*/
  //}
  void deletes()
{
    string line;
    char cphone[100];
    ifstream myfile;

    myfile.open("tele.txt");
    ofstream write;
    write.open("temp.txt");

    char searchkey[20];
    cout<<"enter the phone you want to delete: ";
    cin>>searchkey;

    while(!myfile.eof())
    {
        getline(myfile,line);
        strcpy(cphone,line.c_str());

        if(strncasecmp(searchkey, cphone, strlen(searchkey)) != 0)
        {
            write<<line<<endl;
        }
    }
    myfile.close();
    write.close();

    ifstream tmp;
    tmp.open("temp.txt");
    ofstream real;
    real.open("tele.txt");

    while(!tmp.eof())
    {
        getline(tmp,line);

        real<<line<<endl;

    }
    real.flush();

    tmp.close();
    real.close();

    ofstream tm;
    tm.open("temp.txt");
    tm.flush();
    tm.close();
}



  void delete_all_data()
{
    cout<<"Are you sure you want to delete your records!<y/n>\n";
    char ans;
    cin>>ans;
    if (ans=='y'|| ans=='Y')
    {
        remove("trial.txt");
        cout<<"File successfully deleted!\n ";

    }
    else
    {
        exit(0);



}
}


int main()
{
	int size =0;
	char choose;
	customers b[10];
	system("color 1f");
	ifstream myfile("telecome.txt");
	if(myfile.good()){
            load();
	    }
	menu_lable:
	cout<<"****************************WELCOME TO ETHIO_TELECOM******************************"<<endl;
	cout<<"\t1.ADD RECORD\n\t2.DISPLAY RECORD\n\t3.SEARCH RECORD\n\t4.MODIFY RECORD\n\t5.DELETE RECORD\n\t6.EXIT\n";
	cout<<"ENTER YOUR CHOICE :";
	cin>>choose;
	switch (choose)
	{
		case '1':
			system("cls");
			add();
			system("pause");
			goto menu_lable;
			break;
		case '2':
			system("cls");
			display();
			system("pause");
			goto menu_lable;
			break;
        case '3':
          system("cls");
			search();
			system("pause");
			goto menu_lable;
			break;
        case '4':
            system("cls");
			modify();
			system("pause");
			goto menu_lable;
			break;
        case '5':
            system("cls");
            char delChoice;
            cout<<"*************Delete Menu***************\n";
            cout<<"\t1) DELETE INDIVIDUAL FILE\n\t2) DELETE ALL\n";
            cin>> delChoice;
            switch(delChoice){
        case '1':
            deletes();
            break;
        case '2':
            delete_all_data();
            break;
        default:
            cout<<"Wrong input please pick a number from 1-2\n";

            }

			system("pause");
			goto menu_lable;
			break;
        case '6':
            exit(0);
            break;
        default:
            cout<< "WRONG INPUT PLEASE PICK A NUMBER FROM 1-6\n";
            system("pause");
			goto menu_lable;
	}

	myfile.close();
return 0;
}
