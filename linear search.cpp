#include<stdio.h>
int linearsearch(int arr[],int n,int key);
int main(){
	int n,key,arr[100],result;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the elements to search");
	scanf("%d",&key);
	result=linearsearch(arr,n,key);
	printf("element found at position %d",result+1);
	return 0;
}
int linearsearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}