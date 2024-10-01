#include<stdio.h>
#define Max 100
void insert(int arr[],int *n,int element,int position);
void Delete(int arr[],int *n,int position);
void display(int arr[],int n);
int main(){
	int arr[Max];
	int choice,n,element,position;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	while(1){
		printf("\n array operations\n");
		printf(" 1.insert\n");
		printf(" 2.Delete\n");
		printf(" 3.display\n");
		printf(" 4.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("enter the element to insert");
				scanf("%d",&element);
				printf("enter the position");
				scanf("%d",&position);
				insert(arr,&n,element,position);
				break;
				
				
			case 2:
				printf("enter the position of the element to delete");
				scanf("%d",&position);
				Delete(arr,&n,position);
				break;
			case 3:
				printf("displaying the array:");
				display(arr,n);
				break;
			
			case 4:
				return 0;
			
			default:
			    printf("enter the invalid choice");	
				
				
		}
		
	}
	return 0;
}
void insert(int arr[],int *n,int element,int position){
	for(int i=*n;i>=position;i--){
		arr[i]=arr[i-1];
	}
	arr[position-1]=element;
	(*n)++;
	
}
void Delete(int arr[],int *n,int position){
	for(int i=position-1;i<*n-1;i++){
		arr[i]=arr[i+1];
	}
	(*n)--;
}
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
		
	}
	printf("\n");
}