
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>


int search(int arr[], int size, int val);

void print(int arr[], int size)

int reverse_search(int arr[], int size, int val); // <- organic chem tutor moment

append(ITEM_TYPE a[],int& num_used, ITEM_TYPE item);

shift_left(ITEM_TYPE a[], int& numUsed, int mark);

void insert_before(ITEM_TYPE a[], int& num_used, ITEM_TYPE item, int mark);

void sort(ITEM_TYPE a[], int& num_used, bool ascending);

#endif