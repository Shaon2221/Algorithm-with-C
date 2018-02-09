/********************************************
Author: Shaon Sikder
Title: Bubble Sort
Date: 09/02/208
********************************************/
#include<stdio.h>
 void Bubble_Sort(int arr[],int n);
int main(){
    int arr[1000], n, i,item;
    printf("Size of array: ");
    scanf("%d",&n);
    printf("Give input: ");
    for(i=0; i<n; i++){
        scanf(" %d",&arr[i]);
    }
    Bubble_Sort(arr,n);
    return 0;
}
void Bubble_Sort(int arr[],int n){
    int i,j;
    for(i=0;  i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){///comparing 2 value each time & swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    ///printing sorted data.....
    printf("Sorted data using Bubble Sort:");
    for(i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
