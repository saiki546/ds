#include<stdio.h>
int main(){
    int n,n1=0,n2=1,nextterm;
    printf("enter the no:");
    scanf("%d",&n);
    printf("fibonacci series:%d,%d",n1,n2);
    for(int i=3;i<=n;i++){
    	nextterm=n1+n2;
    	printf(",%d",nextterm);
    	n1=n2;
    	n2=nextterm;
	}
	
	printf("\n");
}
