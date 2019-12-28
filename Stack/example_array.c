#include<stdio.h>
#define MAX 100

void push(int num);
void pop();
int empty();

int stack[MAX];
int top=-1;

void push(int num){
	printf("push : %d\n", num);
	top++;
	stack[top]=num;
}

void pop(){
	if(top<0) printf("-1\n");
	else top--;
}

int empty(){
	if(top==-1) return 1;
	else return 0;
}

int Top(){
	if(!empty()) printf("%d\n", stack[top]);
	else printf("-1\n");
}

int size(){
	return top+1;
}

int main(){
	push(4);
	push(5);
	printf("%d\n",empty());
	Top();
	printf("size : %d\n", size());
	pop();
	pop();
	printf("%d\n", empty());
	
	return 0;
}