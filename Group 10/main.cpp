#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
struct Collage{
   char depId[25];
   char depName[25];
   char depHead[25];
   char collageName[25];

}C[10];
int size =0;
Collage accept(Collage c[])
    {
        int num;
       cout<<"Enter the Number of Departmnets you want add"<<endl;
       cin>>num;
       for (int i=size;i<size+num;i++)
       {
        cout<<"Enter the Departmnet Name"<<endl;
        cin.ignore();
        cin.getline(c[i].depName,25);
        cout<<"Enter the Departmnet Id"<<endl;
        cin.ignore();
        cin.getline(c[i].depId,25);
        cout<<"Enter the Departmnet Head"<<endl;
        cin.ignore();
        cin.getline(c[i].depHead,25);
        cout<<"Enter the Collage Name"<<endl;
        cin.ignore();
        cin.getline(c[i].collageName,25);

       }
       size+=num;
       return *c;

    }
    void display(Collage c[]){

if ( size==0){
		cout<<"no file found please enter data "<<endl;
		}
		else{
			cout<<"department id\t department name\t department head\t college name\t"<<endl;
			for(int i=0;i<size;i++){


		cout<<c[i].depId<<"\t"<<c[i].depName<<"\t"<<c[i].depHead<<"\t"<<c[i].collageName<<endl;
	}
}
}

void search(Collage c[]){
   int found =-1;
    char searchkey[50];
    cin.ignore();
    cout << "Enter Department to search: ";
    gets(searchkey);
    for(int i=0; i<size;i++){

        if(strcmp(searchkey,c[i+1].depId)== 0){
            found =i;
                cout<< " __________________________________________________________________"<<endl;
    cout<<"|Dep ID|\t\t|Dep Name|\t\t|Dep Head|\t\t|Collage Name\n";
    cout<< " __________________________________________________________________"<<endl;

            cout<< c[i].depId<<"\t\t"<<c[i].depName<<"\t\t"<<c[i].depHead<<"\t\t"<<c[i].collageName<<endl;
          cout<< " __________________________________________________________________"<<endl;
        }
    }
    if(found == -1){
        cout << "Student not found\n";
    }



}

int main()
{

    menulabel: system("CLS");
    cout<<"1. Add Department."<<endl;
    cout<<"2. Display All Departments."<<endl;
    cout<<"3. Search Department."<<endl;
    cout<<"4. Exit."<<endl;
    char choice;
    cin>>choice;
    switch (choice){
case '1':

    accept(C);
    system("pause");
    goto menulabel;
    break;
case '2':
    display(C);
    system("pause");
    goto menulabel;
    break;
case '3':
    search(C);
    system("pause");
 goto menulabel;
    break;
case '4':
    exit(0);
default:
    cout<< "Invalid input please pick a number from 1-4"<<endl;
    system("pause");
 goto menulabel;
    break;
    }

    return 0;
}
