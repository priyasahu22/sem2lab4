#include<iostream>
using namespace std;

//linked list
class node
{
  public:
   int data;
   node*next;
 
 node()
{
  next=NULL;
}
};
class ll
{
  public:

  node*head;
  node*tail;
  ll()
{
  head=NULL;
  tail=NULL;
}

void insert(int dat)
{
  node*temp=new node;
  temp->data=dat;
  
  if(head==NULL)
{
  head=temp;
 // head->next=NULL;
  tail=temp;
}
else
{
  tail->next=temp;
  tail=temp;
  node*current=head;
   while(current->next!=NULL)
  {
     current=current->next;
  }
current->next=temp;
tail=temp;
temp->next=NULL;
}
}

void remove()
{
   node*temp=new node;
   node*current=head;
   while(current->next!=tail)
{
    current=current->next;
}
current->next=NULL;
temp=tail;
tail=current;
delete temp;
}
void insertat(int pos,int value)
{
   node*temp=new node;
   temp->data=value;
   
   node*current=head;
   int i=1;
if(pos==1)
{
   temp->next=head;
   head=temp;
}
else
{
   while(i<pos-1)
{   
   i++;
   current=current->next;
    
}

temp->next=current->next;
current->next=temp;
}
}
void deleteat(int pos)
{
  node*temp=new node;
   node*current=head;
   node*curr=head;
int i=1;
if(pos==1)
{
  temp=head;
  delete temp;
  head=temp->next;
  head=current->next;
}
else
{
while(i<pos-1)
{
  curr=curr->next;
i++;
}  
int j=1;
while(j<pos)
{
  current=current->next;
j++;
}
 

curr->next=current->next;

temp=current;
temp->next=NULL;
delete temp;

}
} 
 
int countitem()
{
  int i=0;
  node*current=head;
  while(current!=NULL)
{
i++;
  current=current->next;

}
return i;
}

void display()
{
   //int i=1;
  node*current=head;
  while(current!=NULL)
{
  cout<<current->data<<"->";
  current=current->next;
 
}
}

};
/*int main()
{
  ll l1;
  int h,k,l;
 for(int i=1;i<=5;i++) 
  {
   l1.insert(i);
    }   
l1.display();

l1.remove();
cout<<"\n------------------------------------------------------------\n";
l1.display();
cout<<"\n ENTER POSITION AND VALUE TO insertion RESPECTIVELY:";
cin>>h;
cout<<endl;
cin>>k;
l1.insertat(h,k);
cout<<endl;
l1.display();
cout<<"\n ENTER POSITION for deletion:";
cin>>l;
l1.deleteat(l);
cout<<endl;
l1.display();

return 0;

}*/
