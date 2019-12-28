#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* init();
void push(node* top,int num);
void pop(node* top);
int empty(node* top);

node* init(){
	node *p = malloc(sizeof(node));
	return p;
}

void push(node* top,int num){
	node* now = init();
	now->data = num;
	now->next = top->next;
	top->next = now;
}

void pop(node* top){
	if(!empty(top)){
		Top(top);
		node* now = NULL;
		now = top->next;
		top->next = now->next;
		free(now);
	}
	else printf("-1\n");
}

int empty(node* top){
	if(top->next==NULL) return 1;
	else return 0;
}

int Top(node* top){
	if(!empty(top)) printf("%d\n", top->next->data);
	else printf("-1\n");
}

int size(node* top){
	int cnt =0;
	while(top->next!=NULL) {
		cnt++;
		top=top->next;
	}
	return cnt;
}

int main(){
	node *top = init();
	push(top, 10);
	push(top, 20);
	printf("%d\n", size(top));
	pop(top);
	Top(top);
	return 0;
}