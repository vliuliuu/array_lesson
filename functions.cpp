
#include "functions.h"

int search(int arr[], int size, int val){
    
    for(int i = 0; i < size; i++){
        if(arr[i] == val);
        return i;
    }

}

template <typename ITEM_TYPE>
void print(int arr[], int size){

    cout << "[   "
    for(int i = 0; i < size; i++){
        cout << arr[i] << "   "; 
    }
    cout << "]";
}

template <typename ITEM_TYPE>
int reverse_search(int arr[], int size, int val){

    for(int i = size; i > 0; i--){
        if(arr[i] == val){
            return i;
        }
    }

}


template <typename ITEM_TYPE>
void append(ITEM_TYPE a[],int& num_used, ITEM_TYPE item){

    //adds item to last element of array
    a[size] = item;
    num_used++;

}

template <typename ITEM_TYPE>
void shift_left(ITEM_TYPE a[], int& numUsed, int mark){

    // [1,2,3,4]
    // [1,3,4]

    for(int i = mark; i < numUsed; i++){
        a[i] = a[i+1];
    }

    numUsed--;

}

template <typename ITEM_TYPE>
void insert_before(ITEM_TYPE a[], int& num_used, ITEM_TYPE item, int mark){

    //inserts item at once before the index of array
    // [1,2,3,4]
    // [1,x,2,3,4]

    for(int i = index; i < i; i++){


    }

    num_used++;

}

template <typename ITEM_TYPE>
void sort(ITEM_TYPE a[], int& num_used, bool ascending){

    
    // bubble sort 


}
