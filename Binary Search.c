/********************************************
Author: Shaon Sikder
Title: Binary Search
Date: 08/02/208
********************************************/
#include<stdio.h>
int Binary_Search(int arr[],int low, int high, int item);
int main(){
    int arr[1000], high, i,item,result;
    printf("Size of array: ");
    scanf("%d",&high);
    printf("Give input: ");
    for(i=0; i<high; i++){
        scanf(" %d",&arr[i]);
    }
    printf("Which item do you want to search?\n");
    scanf("%d",&item);
    result=Binary_Search(arr,0,high,item);
    if(result==-1){
        printf("Item not found in entire array\n");
    }else{
        printf("%d found in index no %d\n",item,result);
    }
    return 0;
}

int Binary_Search(int arr[], int low, int high, int x)
{
if (high >= low)
    {
		int mid = low + (high - low)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return Binary_Search(arr, low, mid-1, x);
		return Binary_Search(arr, mid+1, high, x);
    }
return -1;
}
