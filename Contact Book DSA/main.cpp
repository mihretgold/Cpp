#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
struct Node{//name of the struct is used for Node *next
    long long int phoneNumber;
    string name;
    Node* next;
    Node* prev;
};
class ContactBook{
    Node *head;
    string x;
    long long int y;

public:
    ContactBook(){
    head=NULL;
    x="";
    y=0;
    }
    void CreateNode(){
    if(head==NULL){
        Node *newer= new Node;

        cout<<"Enter your name" <<endl;
        cin>>x;
        newer->name=x;
         cout<<"Enter your phone number" <<endl;
         cin>>y;
         newer->phoneNumber=y;
         newer->next=NULL;
         newer->prev=NULL;
         head=newer;
         cout<<"Contact added\n";
    }
    else{
       Node *newer= new Node;

        cout<<"Enter your name" <<endl;
        cin>>x;
        newer->name=x;
         cout<<"Enter your phone number" <<endl;
         cin>>y;
         newer->phoneNumber=y;
         newer->next=NULL;
         Node *temp=head;
         while(temp->next != NULL){
            temp=temp->next;
         }
         temp->next=newer;
         newer->prev=temp;
         cout<<"Contact added\n";
    }
    }
    void display(){
        Node *temp=head;
        int count=0;
        if(temp == NULL){
            cout<<"No Contact"<<endl;
        }
        else{
            BubbleSort();
            cout<<"Name     Phone Number\n";
            while(temp!=NULL){
                 count++;
                cout<< temp->name<< "\t\t"<< temp->phoneNumber<<endl;
                temp=temp->next;
            }
        cout<<"Total contacts: "<<count<<endl;
        }
    }
    int Search(){
        bool check =false;
        Node *temp=head;
        int command;
        cout<<"1) Search by Name: \n";
        cout<<"2) Search by Phone Number: \n";
        cout <<"Enter choice: ";
        cin>>command;
        if(command==1&&temp!=NULL){
            cout<<"Enter Name you want to search: ";
            cin>>x;
            while(temp!=NULL){
                if(temp->name==x){
                    cout<< "Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    check=true;
                    break;
                }
                    temp=temp->next;
            }
            if(check==false){
                cout<<"Not found\n";
            }
        }
        else if(command==2){
            cout<<"Enter Phone Number you want to search: ";
            cin>>y;
            while(temp->next!=NULL){
                if(temp->phoneNumber==y){
                    cout<< "Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    check=true;
                    break;
                }
                    temp=temp->next;
            }
            if(check==false){
                cout<<"Not found\n";
            }
        }
        //add exception handling

    }
    void DeleteAllContacts(){
        Node* temp=head,temp2;
        if(head==NULL){
            cout<<"No Files\n";
        }
        else{
            while(temp!=NULL){
                temp2= temp;
                temp=temp->next;
                delete temp2;
            }
            head=NULL;
            cout<<"Successfully Deleted All Contacts"<<endl;
        }
    }
    int deleteContactBySearch(){
        Node *temp=head;
        int command;
        cout<<"1) Search by Name: \n";
        cout<<"2) Search by Phone Number: \n";
        cout <<"Enter choice: ";
        cin>>command;
        if(command==1){
            bool Dcheck=false;
            cout<<"Enter Name you want to search: ";
            cin>>x;
            while(temp!=NULL){
                if(temp->name==x){
                    cout<< "Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    Dcheck=true;
                    break;
                }
                    temp=temp->next;
            }
        if(Dcheck==true){
            int command;
            cout<<"Press 1 to delete contact: ";
            cin>>command;
            if(command==1 && temp==head){
                Node *temp1;
                temp1=temp;
                temp=temp->next;
                delete temp1;

                temp->prev=NULL;
                head=temp;
                cout<<"Contact deleted successfully"<<endl;
            }
            else if(command==1 && temp->next==NULL){
                temp->prev->next=NULL;
                delete temp;
                cout<<"Contact deleted successfully"<<endl;
            }
            else if(command==1){
                Node *temp1;
                temp1=temp;
                temp->prev->next=temp1->next;
                temp->next->prev=temp1->prev;
                delete temp1;
                cout<<"Contact deleted successfully"<<endl;
            }
            else{
                cout<<"You Enter Wrong Command ... Try Again"<<endl;
            }
        }
        else if(Dcheck==false){
            cout<<"Contact not found"<<endl;
        }
        }
        else if(command==2){
          bool Dcheck=false;
            cout<<"Enter Phone Number you want to search: ";
            cin>>y;
            while(temp!=NULL){
                if(temp->phoneNumber==y){
                    cout<< "Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    Dcheck=true;
                    break;
                }
                    temp=temp->next;
            }
        if(Dcheck==true){
            int command;
            cout<<"Press 1 to delete contact: ";
            cin>>command;
            if(command==1 && temp==head){
                Node *temp1;
                temp1=temp;
                temp=temp->next;
                delete temp1;

                temp->prev=NULL;
                head=temp;
                cout<<"Contact deleted successfully"<<endl;
            }
            else if(command==1 && temp->next==NULL){
                temp->prev->next=NULL;
                delete temp;
                cout<<"Contact deleted successfully"<<endl;
            }
            else if(command==1){
                Node *temp1;
                temp1=temp;
                temp->prev->next=temp1->next;
                temp->next->prev=temp1->prev;
                delete temp1;
                cout<<"Contact deleted successfully"<<endl;
            }
            else{
                cout<<"You Enter Wrong Command ... Try Again"<<endl;
            }
        }
        else if(Dcheck==false){
            cout<<"Contact not found"<<endl;
        }
        }
    }
    void BubbleSort(){
        Node *temp=head,*i,*j;
        string n;
        long long int n2;
        if(temp=NULL){
            cout<<"Empty\n";
        }
        else{
            for(i=head; i!=NULL; i=i->next){
                for(j=i->next; j!=NULL; j=j->next){
                    if(i->name>j->name){
                        n=i->name;
                        i->name=j->name;
                        j->name=n;

                        n2=i->phoneNumber;
                        i->phoneNumber=j->phoneNumber;
                        j->phoneNumber=n2;
                    }
                }
            }
        }
    }
    int EditContacts(){
        Node *temp=head;
        int command;
        cout<<"1) Search by Name\n";
         cout<<"2) Search by Phone Number\n";
         cin>>Ecommand;
         if(Ecommand==1){
                bool Echeck=false;
                cout<<"Enter the name You want to search\n";
                cin>>x;
            while(temp!=NULL){
                if(temp->name==x){
                    cout<<"Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    Echeck=true;
                    break;
                }
                temp=temp->next;
            }
            if(Echeck==true){
                cout<<"Press 1 to Edit: ";
                int command;
                cin>>command;
                if(command==1){
                    cout<<"Enter Name: ";
                    cin>>x;
                    temp->name=x;
                    cout<<"Enter Phone Number: ";
                    cin>>y;
                    temp->phoneNumber=y;

                    cout<<"Contact Edited successfully!!!\n";
                }
                else{
                    cout<<"Invalid command...Try Again"<<endl;
                }
            }
            else if(Echeck==false){
                cout<<"Name not found\n";
            }
         }
          else if(Ecommand==2){
                bool Echeck=false;
                cout<<"Enter the Phone number You want to search\n";
                cin>>y;
            while(temp!=NULL){
                if(temp->phoneNumber==y){
                    cout<<"Name\t\tPhone Number\n";
                    cout<<temp->name<<"\t\t"<<temp->phoneNumber<<endl;
                    Echeck=true;
                    break;
                }
                temp=temp->next;
            }
            if(Echeck==true){
                cout<<"Press 1 to Edit: ";
                int command;
                cin>>command;
                if(command==1){
                    cout<<"Enter Name: ";
                    cin>>x;
                    temp->name=x;
                    cout<<"Enter Phone Number: ";
                    cin>>y;
                    temp->phoneNumber=y;

                    cout<<"Contact Edited successfully!!!\n";
                }
                else{
                    cout<<"Invalid command...Try Again"<<endl;
                }
            }
            else if(Echeck==false){
                cout<<"Phone number not found\n";
            }
         }
         else{
            cout<<"Invalid command...Try Again"<<endl;
         }
    }
    void OflineSave(){
        Node *temp=head;
        ofstream myfile("contactbook.txt");
        if(myfile.is_open()){
            while(temp!=NULL){
                myfile<<temp->name<<endl;
                myfile<<temp->phoneNumber<<endl;
                temp=temp->next;
            }
            myfile.close();
            Structure();
        }
        else{
            cout<<"Thanks file is empty.\n";
        }

    }
    void reopenCB(){
        bool isEmpty;
        ifstream myfile ("contactbook.txt");
        if(myfile.is_open() && myfile.peek() != EOF){
            int i=0;
            while(getline(myfile,x)){
              if(i%2 ==0){
                if(head==NULL){
                    Node *newer=new Node;
                    newer->name=x;

                        newer->next=NULL;
                        newer->prev==NULL;
                        head=newer;
                }
                else{
                    Node *newer= new Node;

                    newer->name=x;
                    newer->next=NULL;

                    Node *temp=head;
                    while(temp->next!=NULL){
                        temp=temp->next;
                    }
                    temp->next=newer;
                    newer->prev=temp;
                }
              }
              else{
                Node *temp=head;
                if(temp->phoneNumber==0){
                    stringstream convert(x);
                    convert>>y;
                    temp->phoneNumber=y;
                }
                else{
                    Node *temp=head;
                    while(temp->next!=NULL){
                        temp=temp->next;
                    }
                    stringstream convert(x);
                    convert>>y;
                    temp->phoneNumber=y;
                }
              }
              i++;
            }
            myfile.close();
        }
        else{
            cout<<"File is Empty so Cannot open ... Sorry\n";
        }
    }
    void Structure(){
        cout<<"1) Create Node\n";
        cout<<"2) Edit Contact\n";
        cout<<"3) Delete by search\n";
        cout<<"4) Search contact\n";
        cout<<"5) Display all\n";
        cout<<"6) Delete all\n";
        int scommand;
        cout<<"Enter command: ";
        cin>>scommand;
        try{
            if(scommand>=1 && scommand<=6){
                if(scommand==1){
                    CreateNode();
                    OflineSave();
                    Structure();
                }
                else if(scommand==2){
                    EditContacts();
                    OflineSave();
                    Structure();
                }
                else if(scommand==3){
                    deleteContactBySearch();
                    OflineSave();
                    Structure();
                }
                else if(scommand==4){
                    Search();
                    Structure();
                }
                else if(scommand==5){
                    display();
                    Structure();
                }
                else if(scommand==6){
                    DeleteAllContacts();
                    OflineSave();
                    Structure();
                }
            }
            else{
                throw(scommand);
            }
        }
        catch(int scommand){
            cout<<"You Enter wrong command ... Run the code again\n";
            Structure();
        }
    }

};

int main()
{
    ContactBook cb;
    cb.reopenCB();
    string name;
    cin>>name;
    cout<< name<<"Welcome"<<endl;
    cb.Structure();
    return 0;
}
