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
