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
	cout << endl;
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

void insert(node **head,int x,int k){
	int n = size(*head);
	if(k < 1 || k > n){
		cout << "Vi tri khong ton tai!\n";
		return;
	}
	if(k == 1){
		Front(head,x);
		return;
	}
	node *tmp = *head;
	for(int i = 1;i <= k-1;i++){
		tmp = tmp->next;
	}
	node *newNode = makeNode(x);
	newNode->next = tmp;
	tmp->prev->next = newNode;
	newNode->prev = tmp->prev;
	tmp->prev = newNode;
}
int main(){
	node *head = NULL;
	while(1){
		cout << "1.Them o dau\n";
		cout << "2.Them o cuoi\n";
		cout << "3.Them o giua\n";
		cout << "4.In ra\n";
		cout << "5.In ra size\n";
		int lc; cin >> lc;
		if(lc == 1){
			int x; cin >> x;
			Front(&head,x);
		}
		else if(lc == 2){
			int x; cin >> x;
			Back(&head,x);
		}
		else if(lc == 3){
			int x, k; cin >> x >> k;
			insert(&head,x,k);
		}
		else if(lc == 4){
			duyet(head);
		}
		else {
			break;
		}
	}
}

