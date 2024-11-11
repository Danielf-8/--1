#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    Numbers* first = NULL;

    cout << "Hello" << endl;
    cout << "Try to init 1 and 3 to linked list" << endl;

    //add first number to linked list
    add_new_number(&first, 1);

    //add second number to linked list
    add_new_number(&first, 3);

    cout << "first number = " << delete_number(&first) << endl;
    cout << "second number = " << delete_number(&first) << endl;
    
    return 0;
}
