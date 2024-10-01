#include<stdio.h>
long factorial(int n) {
	if (n==0||n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
