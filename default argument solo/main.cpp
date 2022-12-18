#include <iostream>

using namespace std;

int volume(int a = 2, int b = 3, int c = 5)
{
    return a * b * c;
}
/*int sum(int a, int b = 42){
int result = a + b;
return(result);
}
*/
int main()
{
    cout << volume(4, 5);
   /* int x = 24;
    int y = 36;

    int result = sum(x, y);
    cout << result << endl;

    result = sum(x);
    cout << result << endl;*/

    return 0;
}
