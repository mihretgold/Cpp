#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    /*char arr[100];
    cout<< "Enter your name and age";
    cin.getline(arr,100);

    ofstream myfile("xyz.txt", ios::app);
    myfile << arr;
    myfile.close();
    char arr1[100];
    cout<< "file write operation performed successfuly"<<endl;
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout<<"array content: "<< arr1<<endl;
    cout<< "file read operation performed successfuly"<<endl;
    */
    /*ofstream file;
    file.open("new.txt", ios::app);
    if(!file){
        cout<< "error while opening the file";
    }
    else{
        file<<"Mihret will get an A in all five subjects"<<endl;
        file<< "C++"<< setw(10)<<"stat"<< setw(10)<<"datacom"<<endl;
        file<< "A"<< setw(10)<<"A"<< setw(10)<<"A"<<endl;
        cout<< "file opened successfully"<<endl;
        file.close();
    }
    string arr2;
    ifstream file2;
    file2.open("new.txt");
    while(file2.good()){
    getline(file2,arr2);
    cout<< arr2<<endl;
}
    cout<< "file successfully read"<<endl;
    file2.close();*/

   /* string search;
    int offset;

    string line;
    ifstream myfile;
    myfile.open("new.txt");
    cout<< "Enter the file u want to search:"<<endl;
    cin>>search;
    if(!myfile.is_open()){
        cout<<"file not found"<<endl;
    }
    else{
        getline(myfile,line);
        if((offset = line.find(search,0)) != string::npos){
            cout<<"Found: "<< search<<endl;
        }

    }
    myfile.close();*/
    string name;
    int offset;
    string line;
    string search;
   fstream myfile, myfile1;
    myfile.open("new.txt", ios::in);
    if(!myfile){
        cout<<"error"<<endl;
    }
    else{
        cout<<"enter search:"<<endl;
         cin>>search;
         myfile1.open("record.txt", ios::app|ios::out);
         getline(myfile,line);
         while(!myfile.eof()){
            if((offset = line.find(search,0)) != string::npos){
             getline(myfile1,line);
            cout<<"Found: "<< search<<endl;
        }
         getline(myfile,line);
         }
    }
    myfile1.close();
    myfile.close();
    remove("new.txt");
    rename("record.txt","new.txt");
        return 0;
        }

