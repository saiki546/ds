#include<stdio.h>
int binarysearch(int arr[],int n,int target){
	int low=0,high=n-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			low=mid+1;
		}
		else if(arr[mid]>target){
			high=mid-1;
		}
		
	}
	return -1;
}
int main(){
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target;
	printf("enter the target");
	scanf("%d",&target);
	int result=binarysearch(arr,n,target);
	if(result=-1){
		printf("element not found");
	}
	else{
	    printf("element is found at position %d",result);
	}
	return 0;
}