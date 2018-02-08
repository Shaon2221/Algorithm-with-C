/********************************************
Author: Shaon Sikder
Title: Linear Search
Date: 08/02/208
********************************************/
#include<stdio.h>
 void Linear_Search(int arr[],int n,int item);
int main(){
    int arr[1000], n, i,item;
    printf("Size of array: ");
    scanf("%d",&n);
    printf("Give input: ");
    for(i=0; i<n; i++){
        scanf(" %d",&arr[i]);
    }
    printf("Which item do you want to search?\n");
    scanf("%d",&item);
    Linear_Search(arr,n,item);
    return 0;
}
 void Linear_Search(int arr[],int n,int item){
     int i,flag=0;
     for(i=0; i<n; i++){
        if(arr[i]==item){
            printf("%d found in index no %d",arr[i],i);
            flag=1;
            break;
        }
    }
    if(flag==0){
            printf("Item not found in entire list\n");
        }
 }
