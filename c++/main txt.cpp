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
int size=0;
customers add(customers a[])
{
	fstream myfile;


	cout<<"*****************ENTER YOUR DATA HEAR*****************"<<endl;
	int num;
    cout<<"enter the number of telephones you want to pay for"<<endl;
    cin>>num;
    //getch(); exeptions
    for (int i=size;i<num+size;i++){
            cin.ignore();
        cout<<"ENTER FIRST NAME :";
	cin>>a[i].first_name;
	cout<<"ENTER LAST NAME :";
	cin>>a[i].last_name;
	cout<<"ENTER PHONE NUMBER :";
	cin>>a[i].phone_number;
	cout<<"ENTER THE AMOUNT :";
	cin>>a[i].amount;
   myfile.open("trial.txt",ios::out|ios::app);
	myfile<<" "<<a[i].first_name<<" "<<a[i].last_name<<"\t"<<a[i].phone_number<<"\t"<<a[i].amount<<endl;

    }
    size+=num;

	myfile.close();
	return *a;
}
void display(customers a[],int i)// problem doesn't display alone without add first
{
    fstream myfile;
    myfile.open("trial.txt",ios::in);
     string line;
   if (i =0){
    cout << "No file found please enter data"<<endl;
  }
  else{
    if(!myfile){
        cout << "No file found please enter data"<<endl;
        myfile.close();
    }

  else{
       cout<<"\nNAME\t\tPHONE NUMBER\tAMOUNT\n";

      while(getline(myfile,line)){
        cout<<line<<endl;;
    }

    }
  myfile.close();}
}
void search(customers a[]){// add choice of try again for not found
  ifstream myfile;
  myfile.open("trial.txt");

      string searchkey,line;
      cin.ignore();
      if(!myfile){
        cout << "No file found please enter data"<<endl;

    }
      cout<<"\nEnter the phone number of the customer you want to find"<<endl;//searches anything on file
      cin>>searchkey;
      cout<<"\nNAME\t\tPHONE NUMBER\tAMOUNT\n";
      while(getline(myfile,line)){
      size_t found = line.find(searchkey);
      if(found != string::npos)
        cout<<line<<endl;

   }
   myfile.close();
  }
  void update()
{
    fstream myfile;
    fstream temp;
     myfile.open("trial.txt",ios::in);
     temp.open("temp.txt",ios::out);
    char fname[25];
    char lname[25];
    char phone[25];
    int amount;
    char a[25];
    cin.ignore();
    cout<<"enter the phone number to update record :";

    cin.getline(a,25);
    cin.ignore();
    while(!myfile.eof())
    {
        myfile.getline(fname,25,'!');
        myfile.getline(lname,25,'!');
        myfile.getline(phone,25,'!');
        myfile>>amount;
        if(strcmp(phone,a)==0)
        {
            cout<<"tener new value of record\n";
            cout<<"\nfrst name:";
            cin.getline(fname,25);
            cout<<"\nlast name:";
            cin.getline(lname,25);
            cout<<"\nphone: ";
            cin.getline(phone,25);
            cout<<"enter amount:";
            cin>>amount;
            temp<<fname<<'!'<<lname<<'!'<<phone<<'!'<<amount<<'\n';
        }
        else
        {
            temp<<fname<<'!'<<lname<<'!'<<phone<<'!'<<amount<<'\n';
        }
    }
    temp.close();
    myfile.close();
    myfile.open("trial.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(fname,25,'!');
        temp.getline(lname,25,'!');
        temp.getline(phone,25,'!');
        temp>>amount;
        myfile<<fname<<'!'<<lname<<'!'<<phone<<'!'<<amount<<'\n';
    }
    temp.close();
    myfile.close();
    remove("temp.txt");
    cout<<"\n DONE!!!\n";
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

    myfile.open("trail.txt");
    ofstream write;
    write.open("temp.txt");

    char searchkey[20];
    cout<<"enter the Name you want to delete: ";
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
    real.open("trial.txt");

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
	fstream myfile("trial.txt",ios::out|ios::app);
	menu_lable:
	cout<<"****************************WELCOME TO ETHIO_TELECOM******************************"<<endl;
	cout<<"\t1.ADD RECORD\n\t2.DISPLAY RECORD\n\t3.SEARCH RECORD\n\t4.MODIFY RECORD\n\t5.DELETE RECORD\n\t6.EXIT\n";
	cout<<"ENTER YOUR CHOICE :";
	cin>>choose;
	switch (choose)
	{
		case '1':
			system("cls");
			add(b);
			system("pause");
			goto menu_lable;
			break;
		case '2':
			system("cls");
			display(b,size);
			system("pause");
			goto menu_lable;
			break;
        case '3':
          system("cls");
			search(b);
			system("pause");
			goto menu_lable;
			break;
        case '4':
            system("cls");
			update();
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
