#include <iostream>
#include <cstdlib>
using namespace std;

struct TNode{
    int data;
    TNode *next;
}*last;

class Node{
	public:
		Node* next;
		Node* posisi;
    	int data;
};

TNode *head, *tail;
void init(){
    head=NULL;
    tail=NULL;
}

int isEmpty(){
	if(tail==NULL) 
		return 1;
	else 
		return 0;
}
void insertDepan(int databaru){
 TNode *baru;
 baru=new TNode;
 baru->data=databaru;
 baru->next=NULL;
 if(isEmpty()==1){
  head=tail=baru;
        tail->next=NULL;
 }
 else {
        baru->next=head;
        head=baru;
 }
 cout<<"Data masuk"<<endl;
}
void insertBelakang(int databaru){
 TNode *baru;
 baru=new TNode;
 baru->data=databaru;
 baru->next=NULL;
 if(isEmpty()==1){
  head=baru;
  tail=baru;
  tail->next=NULL;
 }
  else {
  tail->next = baru;
    tail=baru;
  }
  cout<<"Data masuk"<<endl;
}
