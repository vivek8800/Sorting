/*
    Round 1:    64, 25, 12, 22, 11       //  swap 64 and 11
                i

    Round 2:    11, 25, 12, 22, 64      // swap 25 and 12
                    i

    Round 3:    11, 12, 25, 22, 64      // swap 25 and 22
                        i

    Round 4:    11, 12, 22, 25, 64      // swap 25 and 25 as no need here as already sorted
                            i

    Round 5:    11, 12, 22, 25, 64      // no need of round 5 as already sorted
                                i

    {Smallest element ko lakar usko right place par place kar dete hai}

    Round 1:= At 1st place or i=0 index compare with rest of elements (11, 25, 12, 22, 64)
                take 1 variable minIndex which will be equal to ith index;
                if any element smaller than current element(i=0 or minIndex) update minIndex
                with jth index call swap function and pass array of minIndex and i.
*/

#include<iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    
        for(int i=0;i<size-2;i++)
        {      // loop is up to n-1 because last element will bw already sorted
            int minIndex=i;

            for(int j=i+1;j<size;j++)
            {
                if(arr[j]<arr[minIndex])
                {
                    minIndex=j;
                }
            }
            swap(arr[minIndex], arr[i]);                      
        }
        
        cout<<"Array after sorting"<<endl;
                for(int i=0;i<size;i++)
                {
                cout<<arr[i]<<" ";
                }
}

int main()
{
    int arr[]={64, 25, 12, 22,11};
    int p=sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr,p);
    return 0;
} 