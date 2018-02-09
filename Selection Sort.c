/********************************************
Author: Shaon Sikder
Title: Selection Sort
Date: 09/02/208
********************************************/
#include<stdio.h>
 void Selection_Sort(int arr[],int n);
int main(){
    int arr[1000], n, i,item;
    printf("Size of array: ");
    scanf("%d",&n);
    printf("Give input: ");
    for(i=0; i<n; i++){
        scanf(" %d",&arr[i]);
    }
    Selection_Sort(arr,n);
    return 0;
}
void Selection_Sort(int arr[],int n){
    int i,j,min_index,tmp;
    for(i=0; i<n-1; i++){
        min_index=i;///assuming i as minimum
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index=j;///found index of minimum element
            }
        ///Swapping.... index i'th value with min_index'th value
        tmp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=tmp;
        }
    }
    ///print sorted array
    printf("Sorted result using selection sort:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}
