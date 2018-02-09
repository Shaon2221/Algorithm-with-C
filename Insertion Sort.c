/********************************************
Author: Shaon Sikder
Title: Insertion Sort
Date: 09/02/208
********************************************/
#include<stdio.h>
 void Insertion_Sort(int arr[],int n);
int main(){
    int arr[1000], n, i,item;
    printf("Size of array: ");
    scanf("%d",&n);
    printf("Give input: ");
    for(i=0; i<n; i++){
        scanf(" %d",&arr[i]);
    }
    Insertion_Sort(arr,n);
    return 0;
}
void Insertion_Sort(int arr[],int n){
    int i,j,key;
    for(i=0; i<n; i++){
        key=arr[i];                        ///Assuming 1st value as key element for 1st time,it will change dynamically
        j=i-1;                                     /// j is [0] at initial loop
        while(j>0 && arr[j]>key){
            arr[j+1]=arr[j];           ///value of j is going to j+1 index of array to make room for keeping key in suitable position
            j=j-1;                               ///decrement to compare further position
        }
        arr[j+1]=key;                   ///now, key is in suitable position
    }
    ///printing sorted array.......
    printf("Sorted data using Insertion Sort:");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
