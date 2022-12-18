#include <iostream>

using namespace std;

int main()
{
    int *p = new int; // request memory on heap memory not stack
    *p = 5; // store value
    cout << *p; // use value
    delete p; /* free up the memory forgetting to free up
    leads to memory leaks because the memory will stay
    allocated until the program shuts down */
   *p = NULL;/* NULL pointer is a constant with a value of zero that
    is defined in several of the standard libraries, including iostream.
It's a good practice to assign NULL to a pointer variable when you
 declare it, in case you do not have exact address to be assigned.
 A pointer assigned NULL is called a null pointer.
  For example: int *ptr = NULL;
   */
   /*
   Dynamic memory allocation is useful in many situations,
   such as when your program depends on input. As an example,
   when your program needs to read an image file, it doesn't
   know in advance the size of the image file and the
   memory necessary to store the image.
   */

    return 0;
}
