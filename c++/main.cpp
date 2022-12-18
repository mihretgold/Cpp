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
}a;
int size=0;
int i;
void add()
{

	customers a;
	ofstream myfile;
     char chr;
       myfile.open("trial.txt",ios::binary|ios::app);
	cout<<"*****************ENTER YOUR DATA HEAR*****************"<<endl;
	//int num;
   // cout<<"enter the number of telephones you want to pay for"<<endl;
   // cin>>num;
    //getch(); exeptions
  // do{
            //cin.ignore();
        cout<<"ENTER FIRST NAME :";
	cin>>a.first_name;
	cout<<"ENTER LAST NAME :";
	cin>>a.last_name;
	cout<<"ENTER PHONE NUMBER :";
	cin>>a.phone_number;
	cout<<"ENTER THE AMOUNT :";
	cin>>a.amount;

	myfile.write(reinterpret_cast<char *>(&a), sizeof(customers));
    cout << "Do you Want to add another file"<<endl;

   // cin >>chr;
   // size++;
   //}while(chr=='Y'|| chr =='y');


	myfile.close();

}
void display()// problem doesn't display alone without add first
{
    customers a;
    ifstream myfile;
    myfile.open("trial.txt",ios::in|ios::binary);

   /*if (i =0){
    cout << "No file found please enter data"<<endl;
  }
  else{*/
    if(!myfile){
        cout << "No file found please enter data"<<endl;
        myfile.close();
    }


       cout<<"\nNAME\t\tPHONE NUMBER\tAMOUNT\n";

      while(myfile.read(reinterpret_cast<char *> (&a), sizeof(customers))){
        cout<<a.first_name<<setw(6)<<a.last_name<<setw(10)<<a.phone_number<<setw(10)<<a.amount<<endl;
    }

   // }
  myfile.close();
}
void search(){// add choice of try again for not found
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
 void modify(char *searchkey){
     cin.ignore();
    bool found = false;
     customers a;

     fstream myfile;
    myfile.open("trial.txt", ios:: binary|ios::in|ios::out);
    myfile.seekg(0);
    if(!myfile){
        cout<<"File could not be opened"<<endl;
    }
    else{
        while(myfile.read((char*)&a,sizeof(customers))){
         if(strcmp(searchkey,a.phone_number)== 0){
           cout<<"Record is Found"<<endl;
           cout<<"Name\t\t Phone Number\t\t Amount"<<endl;
        cout<<a.first_name<<setw(6)<<a.last_name<<setw(10)<<a.phone_number<<setw(10)<<a.amount<<endl;
          found=true;
        cout<<"/n/t/tNew Data"<<endl;
        cin.ignore();
        cout<< "Enter First Name: "<<endl;
        cin.getline(a.first_name,50);
        cout<< "Enter Last Name: "<<endl;
        cin.getline(a.last_name,50);
        cout<< "Enter Phone Number: "<<endl;
        cin.getline(a.phone_number,20);
        cout<< "Enter Account Number: "<<endl;
        cin>>a.amount;
        myfile.seekp(sizeof(customers),ios::cur);
        myfile.write((char*)&a,sizeof(customers));
         }
        }
    }
    if(found=false){
     cout<<"Record Not Found"<<endl;
    }
   myfile.close();
 // }
 }

  void deletes(char *searchkey)
{
    cin.ignore();
    customers a;
    ifstream myfile;
 ofstream outFile;

   myfile.open("trail.txt", ios::binary);

   /* if (i =0){
    cout << "No file found please enter data"<<endl;
  }
  else{*/
   if(!myfile){
    cout<<"File could not open"<<endl;

   }
   outFile.open("temp.txt",ios::binary);

   myfile.seekg(0,ios::beg);
    while(myfile.read(reinterpret_cast<char *> (&a), sizeof(customers)))
    {


       // if(strncasecmp(searchkey, a.phone_number, strlen(searchkey)) != 0)
         if(strcmp(searchkey,a.phone_number)== 0)
        {
           outFile.write(reinterpret_cast<char *> (&a),sizeof(customers));

        }
    }
    myfile.close();
    outFile.close();

    remove("trail.txt");
    rename("temp.txt","trail.txt");
    cout<<"\n\n\tRecord Deleted..";

 //}
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
	//int size =0;
	char searchkey[50];
	char choose;
	customers b/*[50]*/;
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
			//search(b);
			system("pause");
			goto menu_lable;
			break;
        case '4':
            system("cls");
            cout<<"Enter Phone Number you want to delete"<<endl;
            gets(searchkey);
			modify(searchkey);
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
            cout<<"Enter Phone Number you want to delete"<<endl;
            gets(searchkey);
           deletes(searchkey);
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

