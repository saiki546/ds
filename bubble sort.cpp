#include<stdio.h>
void bubblesort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void printarray(int arr[],int n){
	printf("the original array is ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[]={1,2,4,3,78,65,22};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("original array:\n");
	printarray(arr,n);
	printf("array after sorting");
	bubblesort(arr,n);
	printarray(arr,n);
}