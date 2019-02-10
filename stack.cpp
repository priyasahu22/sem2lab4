//stack implementing through linked list
#include"linkedlist.cpp"
#include<iostream>
//stack class
class stack
{
   public:
  
   node *top;
   ll l1;
   stack()
{
  top=NULL;
}
void push()
{
  int value;
  cout<<"\n PUSH the value you want:";
 cin>>value;
  l1.insertat(1,value);
 
}
void pop()
{
  l1.deleteat(1);
}
int size()
{
  return l1.countitem();
}
void display()
{
  l1.display();
}
};
int main()
{
  stack s1;
for(int i=0;i<5;i++)
{
 

 s1.push();
}

 s1.display();
cout<<"\nsize of the stack:";
  cout<<s1.size();
s1.push();
cout<<"\npushed stack:";
s1.display();
 s1.pop();
cout<<"\npoped stack:";
 s1.display();
cout<<"\nsize of the stack:";
  cout<<s1.size();
 return 0;

}
