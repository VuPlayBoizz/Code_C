#include<bits/stdc++.h>
using namespace std;

struct node{ //cau truc cua 1 node
	int data;
	node *next;//link sau
	node *prev;//linh truoc
};

node* makeNode(int x){ //tao 1 node moi
	node *newNode = (node*)malloc(sizeof(node)); //cap phat dong 1 node
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int size(node *head){
	int cnt = 0;
	while(head != NULL){
		cnt++;
		head = head->next;
	}
	return cnt;
}

void Front(node **head,int x){
	node* newNode = makeNode(x);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	newNode->next = (*head);
	if(*head != NULL){
		(*head)->prev = newNode;
		*head = newNode;
	}
}

void Back(node **head,int x){
	node* newNode = makeNode(x);
	if(*head == NULL){
		*head = newNode;
		return;
	}
	node *tmp = *head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->prev = tmp;
}

int main(){
	node *head = NULL;
//	for(int i = 1;i <= 10;i++){
//		Back(&head,i);
//	}
    Front(&head,100);
    Front(&head,300);
    Front(&head,500);
	duyet(head);
}

