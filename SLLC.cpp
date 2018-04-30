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

void tampil(){
TNode *bantu;
bantu=head;
if(isEmpty()==0){
while(bantu!=NULL){
cout<<bantu->data<<" ";
bantu=bantu->next;
}
} 
else 
cout<<"Masih kosong\n";
}

void clear(){
TNode *bantu,*hapus;
bantu = head;
while(bantu!=NULL){
hapus = bantu;
bantu = bantu->next;
delete hapus;
}
head = NULL;
cout<<"CLEAR";
}

int main () {
int pilih,databaru,posisi;
do {
system("cls");
cout<<endl<<endl;
cout<<"Pilihan : "<<endl;
cout<<"1. Insert Data"<<endl;
cout<<"2. Tambah Data Node Depan"<<endl;
cout<<"3. Tambah Data Node Belakang"<<endl;
cout<<"4. Hapus Data Node Depan"<<endl;
cout<<"5. Hapus Data Node Belakang"<<endl;
cout<<"6. Sisipkan Data Node"<<endl;
cout<<"7. Lihat"<<endl;
cout<<"8. clear"<<endl;
cout<<"9. Keluar"<<endl;
cout<<"Masukan Pilihan : "; cin>>pilih;
switch(pilih){
case 1:{
cout<<"Masukan Data : "; cin>>databaru;
insertDepan(databaru);
cout<<endl;
break;
}	
case 2:{
cout<<"Masukan Data : "; cin>>databaru;
insertDepan(databaru);
cout<<endl;
break;
}	
case 3:{
cout<<"Masukan Data : "; cin>>databaru;
insertBelakang(databaru);
cout<<endl;
break;
}
case 4:{
hapusDepan();
cout<<endl;
break;
}	
case 5:{
hapusBelakang();
break;
}	
case 6:{
cout<<"Masukan Data : "; cin>>databaru;
cout<<"Masukan Posisi Data yang ingin ditambahkan: "; cin>>posisi;
sisipan(databaru, posisi);
cout<<endl;
break;
}
case 7:{
tampil();
break;
}
case 8:{
clear();
break;
}
case 9:{
exit(1);
break;
}
default:{
cout<<"Wrong choice"<<endl;
}
}
}
while(pilih!=9);
return 0;
}
