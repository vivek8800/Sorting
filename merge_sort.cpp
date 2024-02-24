/*
Topic: Merge Sort
                        _________________________________
                        |38   27   43   3    9    82   10|
                             /                    \
                            /                      \
                           /                        \
                   |38  27  43  3|              |9   82  10|
                    /          \                   /      \
                   /            \                 /        \
               |38  27|        |43  3|          |9   82|      |10|
                /   \            /  \             / \          \
               /     \          /    \           /   \          \
            |38|    |27|     |43|   |3|        |9|  |82|        |10|
              \      /          \    /           \   /            / 
               \    /            \  /             \ /            /
              |27 38|          |3   43|        |9    82|       |10|
                \               /                  \            /
                 \             /                    \          /
                  \           /                      \        /
                   \         /                        \      /
                 |3   27  38  43|                    |9  10  82|
                        \                               /
                         \                             /
                          \                           /
                           \                         /
                            \                       /
                             \                     /
                        |3    9    10    27   38   43   82|
*/

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid=s+(e-s)/2;
    int len1= mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    // copy values
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    // merge 2  sorted array

    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];

    }

    while(index2<len2){
        arr[mainArrayIndex++]= second[index2++];
    }
}

void mergeSort(int arr[], int s, int e){

   // base case
    while(s>=e){
        return;
    }
int mid=s=(e-s)/2;
    // left part sort karna hai
    mergeSort(arr,s,mid);

    // right part sort karna hai
mergeSort(arr,mid+1, e);

// merge
merge(arr,s,e);
    
}

int main(){
    int arr[]={38,27,43,3,9,82,10};

    int size= sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}