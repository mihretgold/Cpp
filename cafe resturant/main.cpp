#include<iostream>
using namespace std;
void menu()
{

    cout << "Welcome to M cafe & restaurant"<<endl;

        cout << "______________________________________"<<endl;
    cout << "No.     Menu            Price"<<endl;
   cout << "1.       tegabino        25.00 birr"<<endl;
   cout << "2.       pasta besgo     25.00 birr"<<endl;
   cout << "3.       pasta batklt    25.00 birr"<<endl;
   cout << "4.       beyaynet        30.00 birr"<<endl;
   cout << "5.       misr wet        20.00 birr"<<endl;
   cout << "6.       dinich wet      20.00 birr"<<endl;
   cout << "7.       minchet         40.00 birr"<<endl;
   cout << "8.       dulet           40.00 birr"<<endl;
   cout << "9.       dabo firfr      25.00 birr"<<endl;
   cout << "10.      enjera firfr    25.00 birr"<<endl;
   cout << "11.      tibs            30.00 birr"<<endl;
   cout << "12.      siga wet        35.00 birr"<<endl;
   cout << "13.      kikl            35.00 birr"<<endl;
   cout << "14.      sandwich        25.00 birr"<<endl;
   cout << "15.      enkulal firfr   20.00 birr"<<endl;
   cout << "________________________________________"<<endl;
}
void Bmenu();
void food();
void Bevrage();
int main()
{
int choice;

cout << "Welcome to M cafe & restaurant"<<endl;
cout << "1. Food menu"<<endl;
cout << "2. Beverage menu"<<endl;
cout << "3. Exit"<<endl;
cout<<"Please choose your menu"<<endl;
cin>>choice;
switch(choice){
case 1:
food();
break;
case 2:
Bevrage();
break;
case 3:
return 0;
break;
default:
cout<<"Invalid input"<<endl;
}


return 0;
}

void Bmenu()
{

    cout << "Welcome to M cafe & restaurant"<<endl;

        cout << "______________________________________"<<endl;
    cout << "No.     Menu            Price"<<endl;
   cout << "1.       coffee          5.00 birr"<<endl;
   cout << "2.       tea             5.00 birr"<<endl;
   cout << "3.       Capuchino       25.00 birr"<<endl;
   cout << "4.       mackiato        10.00 birr"<<endl;
   cout << "5.       milk            7.00 birr"<<endl;
   cout << "6.       juice           25.00 birr"<<endl;
   cout << "7.       soft drink      15.00 birr"<<endl;

   cout << "________________________________________"<<endl;
}
void food(){
float jum;
int n;
int qty[15];
int no[15];
long price[15], tot[15];
string name[15];
float change, pay;
menu();
cout << "How many types of menu do you want to order? :";cin>>n;
if(n>0 && n<=15)
{
for(int i=0; i<n; i++)
{
cout << "Enter your choice "<<i+1<<"=";
cin>>no[i];
cout << "Enter amount= ";cin>>qty[i];
if (no[i]==1)
{
name[i]="tegabono";
price[i]=25.00 ;
tot[i]=price[i]*qty[i];
}
else if(no[i]==2)
{
name[i]="pasta besgo";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==3)
{
name[i]="pasta batklt";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==4)
{
name[i]="beyaynet";
price[i]=30.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==5)
{
name[i]="misr wet";
price[i]=20.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==6)
{
name[i]="dinch wet";
price[i]=20.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==7)
{
name[i]="minchet";
price[i]=40.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==8)
{
name[i]="dulet";
price[i]=40.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==9)
{
name[i]="dabo firfr";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==10)
{
name[i]="enjera firfr";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==11)
{
name[i]="tibs";
price[i]=30.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==12)
{
name[i]="siga wet";
price[i]=35.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==13)
{
name[i]="kikl";
price[i]=35.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==14)
{
name[i]="sandwich";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==15)
{
name[i]="enkulal firfr";
price[i]=20.00;
tot[i]=price[i]*qty[i];
}
jum=jum+tot[i];
}
system ("cls");
menu();
cout<<"your choice is : "<<endl;
for(int i=0;i<n;i++)
{
cout<<""<<qty[i]<<"portion"<<""<<name[i]<<endl;
cout<<"price/portion = "<<price[i]<<endl;
cout<<"Total price "<<name[i]<<"="<<tot[i]<<endl;
}
int sum =0;
for(int i = 0; i < n; i++){
    sum += tot[i];
}
cout<< "Total price of all = " <<sum << endl;
cout << "Total price with VAT = " << sum +(sum*0.15) << endl;

cin>>pay;
change=pay-jum;
cout<<"change : Rp. "<<change<<endl;
cout<<"Thank you for visiting our cafe & restaurant ";
}
else
cout<<"code you input doesn't exist";
}
void Bevrage()
{
float jum;
int n;
int qty[7];
int no[7];
long price[7], tot[7];
string name[7];
float change, pay;
Bmenu();
cout << "How many types of beverage do you want to order? :";cin>>n;
if(n>0 && n<=7)
{
for(int i=0; i<n; i++)
{
cout << "Enter your choice "<<i+1<<"=";
cin>>no[i];
cout << "Enter amount= ";cin>>qty[i];
if (no[i]==1)
{
name[i]="coffee";
price[i]=5.00 ;
tot[i]=price[i]*qty[i];
}
else if(no[i]==2)
{
name[i]="tea";
price[i]=5.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==3)
{
name[i]="Capuchino";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==4)
{
name[i]="mackiato";
price[i]=10.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==5)
{
name[i]="milk";
price[i]=7.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==6)
{
name[i]="juice";
price[i]=25.00;
tot[i]=price[i]*qty[i];
}
else if(no[i]==7)
{
name[i]="soft drink";
price[i]=15.00;
tot[i]=price[i]*qty[i];
}

jum=jum+tot[i];
}
system ("cls");
Bmenu();
cout<<"your choice is : "<<endl;
for(int i=0;i<n;i++)
{
cout<<""<<qty[i]<<"portion"<<""<<name[i]<<endl;
cout<<"price = "<<price[i]<<endl;
cout<<"Total price "<<name[i]<<"="<<tot[i]<<endl;

}
int sum =0;
for(int i = 0; i < n; i++){
    sum += tot[i];
}
cout<< "Total price of all = " <<sum << endl;
cout << "Total price with VAT = " << sum +(sum*0.15) << endl;
cin>>pay;
change=pay-jum;
cout<<"change : Rp. "<<change<<endl;
cout<<"Thank you for visiting our cafe & restaurant ";
}
else
cout<<"code you input doesn't exist";
}





