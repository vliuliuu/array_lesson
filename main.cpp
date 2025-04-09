
#include <iostream>
using namespace std;

#include "functions.h"

int main(){

    int array1[10];
    int size1 = 0;

    int array2[10] = {1,2,3,4,5};
    int size2 = 5;
    
    int value_at_index = array2[3];
    cout << "Value of array2 at index 3: " << value_at_index << endl;

    int index = search( array2, size2, 2);
    cout << "The value 2 was found at index " << index << " of the array";

    cout << "Before call to append(array2, size2, 7): ";
    print(array2, size2);
    cout << "After call to append(array2, size2, 7): ";

    append(array2, size2, 7);
    print(array2, size2);
    
    
    
    return 0;
}