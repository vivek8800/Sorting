/*
Topic: Insertion Sort

Given Array:    10, 1,  7,  4,  8,  2,  11

check if 1<10  means 1 will come on the left of 10
shift 10-> right 1 place
move 1 to the 0th index

Round 1:    1,  10, 7,  4,  8,  2,  11

check if 7<10  and 7>1means 7 will come between 1 and 10
shift 10-> right 1 place
move 7 to the 1st index

Round 2:    1,  7,  10,  4,  8,  2,  11

check if 4<10, 4<7 but 4>1 means 4 will come between 1 and 7
shift 7-> right 1 place
move 4 to the 2nd index

Round 3:    1,  4,  7, 10,  8,  2,  11

Round 4:    1,  4,  7,  8,  10, 2,  11

Round 5:    1,  2,  4,  7,  8,  10, 11

Round 6:    1,  2,  4,  7,  8,  10, 11      // need to check only last element  but last element is sorted array

*/

#include<iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for(int i=1;i<size;i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(; j>= 0; j--)
        {
            if(arr[j]>temp)
            {
                // shift
                arr[j+1]= arr[j];
            }
            else
            {
                break;
            }
            arr[j+1]= temp;
        }
    }
}
int main(){

    int arr[]={10,1,7,4,8,2,11};
    int p=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, p);

    for(int i=0;i<p;i++){
        cout<<arr[i]<<" ";;
    }

    return 0;
}