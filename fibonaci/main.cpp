#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    int second = 1;
    int next;
    int n, x = 1;
    cout << "Enter a number" << endl;
    cin >> n;
    for(int i = 1; i < n; ++i){
        next= second + first;
        first = second;
        second = next;
        x++;

      cout << "f" << x << " = "<< next << endl;

    }

    return 0;
}
