#include <iostream>

using namespace std;

int main()
{
    /*int i = 1;
    cout << (i?1:2?3:4);*/
   /* int i = 0, j = 0, k;
    i++;
    j++;
    k = (i++) + j;
    cout << i;
    cout << j;
    cout << k;*/
    /*int i = 1;
    for(int i = 1; i <= 6; i += 2){
        if(i % 2 == 0)
            cout << i++ << "*\n";
        else
            cout << ++i << "#\n";
    }
    cout << i << "*\n";*/
    int y= 20, k=10, i, j;
    for(i = 35; i >= y; i--)
    {
        for(j=1; j<=i; j++){
            if(i%j==0)
                k++;
        }
        if(k==4)
            cout<<i<<",";
        k=0;
    }
    cout << k << endl;
    return 0;
}
