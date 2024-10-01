#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack[max];
int top=-1;
void  push(int element){
	if(top==max-1){
		printf("stack overflow");
		return;
	}
	else{
		stack[++top]=element;
	}
}
int pop(){
	if(top==-1){
		printf("stack underflow");
		return -1;
	}
	else{
		return stack[top--];
	}
}
int  peek(){
	if (top==-1){
		printf("stack empty");
		return -1;
	}
	else{
		return stack[top];
		
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	
	printf("top of the stack is %d\n",peek());
	printf("popped element is %d\n",pop());
	printf("top of stack after pop is %d",peek());
	return 0;
	
}