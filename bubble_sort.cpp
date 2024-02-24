/*
Topic: Bubble Sort

Condition:        if(a>b then swap)

Given Array:      10, 1,  7,  6,  14, 9

Round 1.1:        1,  10, 7,  6,  14, 9     // swap 10 and 1

Round 1.2:        1,  7,  10, 6,  14, 9     // swap 10 and 7

Round 1.3:        1,  7,  6,  10, 14, 9     // swap 10 and 6

Round 1.4:        1,  7,  6,  10, 14, 9     // ignore as 10 and 14 already sorted

Round 1.5:        1,  7,  6,  10, 9,  14    // swap 14 and 9 then last element will be automatically sorted i.e 14

------------------------------------------

Round 2.2:        1,  7,  6,  10, 9,  14    // ignore as  1 and 7 already sorted

Round 2.2:        1,  6,  7,  10, 9,  14    // swap 7 and 6

Round 2.3:        1,  6,  7,  10, 9,  14    // ignore as 7 and 10 already sorted

Round 2.4:        1,  6,  7,  9, 10,  14    // swap 10 and 9 then second last element will be already sorted 10, 14.

--------------------------------------------

Round 3.1:         1,  6,  7,  9, 10,  14       ignore as array is sorted

--------------------------------------------
*/

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            // Process element till n-i th index
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{

    int arr[]={3,4,56,7,2,9,8};
    int p=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, p);

    for(int i=0;i<p;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}