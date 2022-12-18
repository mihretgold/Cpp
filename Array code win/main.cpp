#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int arr[n];
    cout << "Enter size of arrray: \n";
    cin >> n;
    for(i = 0; i <= n; i++){
        cout << "Enter array element"<< i << endl;
        cin >> arr[i];
    }
        for(i = 0; i <= n; i++){
         cout << arr[i] << endl;
    }


    return 0;
}
