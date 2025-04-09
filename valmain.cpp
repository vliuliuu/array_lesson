#include <iostream>
using namespace std;

//used to display for loop and indexing
void print(int arr[], int size){

    cout << "[   ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << "   "; 
    }
    cout << "]" << endl;
}

//re-emphasize for loop workflow and discuss edge case handling
int search(int arr[], int size, int val){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

//this is their chance to think about how they would write their loop
int reverse_search(int arr[], int size, int val){
    
    for(int i = size; i > 0; i--){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7};

    //printing our array.
    print(arr, 7);

    //searching for the index that has value 2
    int index_of_2 = search(arr, 7, 2);
    cout << "index of value 2: " << index_of_2 << endl;

    //edge case that utilizes our error handling
    int index_of_8 = reverse_search(arr, 7, 8);
    cout << "index of value 8: " << index_of_8 << endl;

    // searching for the index that has value 7
    int index_of_7 = reverse_search(arr, 7, 7);
    cout << "index of value 7: " << index_of_7 << endl;

    return 0;
}