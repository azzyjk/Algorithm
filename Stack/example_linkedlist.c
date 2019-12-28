#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* init();
void push(node** top,int num);
void pop(node** top);
int empty(node* top);
int Top(node* top);
int size(node* top);

node* init(){
	node *p = malloc(sizeof(node));
	return p;
}

void push(node** top,int num){
	node* now = init();
	now->data = num;
	
	if(*top == NULL){
		*top=now;
	}
	else{
		now->next = *top;
		*top = now;
	}
	
}

void pop(node** top){
	if(!empty(*top)){
		Top(*top);
		node* now = NULL;
		now = *top;
		*top = now->next;
		free(now);
	}
	else printf("-1\n");
}

int empty(node* top){
	if(top==NULL) return 1;
	else return 0;
}

int Top(node* top){
	if(!empty(top)) printf("%d\n", top->data);
	else printf("-1\n");
}

int size(node* top){
	int cnt =0;
	while(top!=NULL) {
		cnt++;
		top=top->next;
	}
	return cnt;
}

int main(){
	node *top = NULL;
	push(&top, 10);
	push(&top, 20);
	printf("%d\n", size(top));
	pop(&top);
	Top(top);
	return 0;
}