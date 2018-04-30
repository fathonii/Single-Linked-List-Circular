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

void hapusDepan(){
    TNode *hapus;
    int d;
    if (isEmpty()==0){
           if(head!=tail){
                hapus=head;
                d=hapus->data;   
                head=head->next;
                delete hapus;
              } 
           else {
                d = tail->data;
                head=tail=NULL;
              }
           cout<<d<<"terhapus";
      }
   else 
cout<<"Masih kosong\n";
}

void hapusBelakang(){
    TNode *bantu,*hapus;
    int d;
    if (isEmpty()==0){
           bantu = head;
           if(head!=tail){
                while(bantu->next!=tail){
                bantu = bantu->next;
               }
            hapus = tail;
            tail=bantu;
            d = hapus->data;
            delete hapus;
            tail->next = NULL;
          }
   else {
        d = tail->data;
        head=tail=NULL;
        }
    cout<<d<<" terhapus\n";
    } 
else cout<<"Masih kosong\n";
}

