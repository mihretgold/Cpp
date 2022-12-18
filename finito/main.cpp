#include <iostream>

using namespace std;
void calc(double height = 5.5){
   if(height-->= 5.5)
    cout<< "tall";
    if(--height>= 4.0)
    cout<< "average";
    if(height-->= 3.0)
    cout<< "short";
    else
        cout<< "very short";
}
void num(int &a, int b){ a++; ++b;}
class sample{
 public:
     long int n;
};
int main()
{
    //calc();
    /*struct sample{int x;};
    sample s;
    s.x = 50;
    int i,j;
    int c=0;
    for(i=25; i<= s.x; i++){
        for(j=1; j<=i; j++){
            if(i%j ==0)
                c++;
                cout<<c;
        }
            if(c==2)
                cout<<i<<",";
            c=0;


    }*/

    int seta[]={13,6,2,15,9};
    int setb[]={14,9, 13,3,4};
    int count;
    int temp[5];

   /*for(int i= 0; i<5; i++){
        if(seta[i]%2!=0){
            count ++;
        }
    }
    cout<< count<<endl;

    for(int i= 0; i<5; i++){
        if(seta[i]%2!=0){
            temp[i] = seta[i];
             cout<< temp[i]<<endl;
        }
    }*/

    for(int i= 0; i<5; i++){
        for(int j=0; j<5; j++){
        if(seta[j]==setb[i]){
                temp[i]=seta[j];
                if(temp[i]!= seta[i]){
                    cout<<seta[i]<<endl;
                }

        }
        }
    }
    /*for(int i= 0; i<5; i++){
        cout<< temp[i]<<endl;
    }*/
    /*char *p1="programming";
    cout<< p1<<endl;
    p1 = p1 + 4;
    cout<< p1<<endl;
    p1 = p1 + 2;
    cout<< p1<<endl;
    p1 = p1 - 3;
    cout<< p1<<endl;
    cout<< p1++<<endl;*/
    /*struct num{
     int x; float y;
    };
    struct num *ptr;
    num n1;
    ptr=&n1;
    (*ptr).x=10;
    (*ptr).y=100.567;
    cout<< ptr->x;
    cout<< ptr->y;*/
    /*int x=20, y=30;
    cout<<x<<endl;
    cout<<"the answer is:\n";
    num(x,y);
    cout<< x<<endl;
    cout <<x++<<endl;
    cout<<y<<endl;*/
    /*sample x;
    while(x.n!=0){
        cout<<"enter num";
        cin>>x.n;
        cout<<"WAW"<<x.n<<endl;
    }
    cout<< "stop"<<endl;*/
    /*int a[5]={2,4,6,8,22};
    cout<<*a<<" "<<a[0];
    int *p=a;
    cout<<a[0]<<*p;*/

    /*int i =5, j= 10, *ptr,**pptr;
    ptr =&i; pptr=&ptr;
    cout<<*ptr++<<" "<<ptr<<endl;
cout<<*(ptr++)<<" "<<ptr<<endl;
cout<<*++ptr<<" "<<ptr<<endl;
cout<<*(++ptr)<<" "<<ptr<<endl;
cout<<++*ptr<<" "<<ptr<<endl;
cout<<++(*ptr)<<" "<<ptr<<endl;
cout<<(*ptr)++<<" "<<ptr<<endl;*/


    return 0;
}
