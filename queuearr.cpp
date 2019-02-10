#include<iostream>
using namespace std;
class queuearr
{
    public:
    int arr[5];
    int front;
    int rear;
queuearr()
{
  top=-1;
}    

   void enqueue()
{
    
if(top>5)
{  
   cout<<"\n stack overflow:";
}
 else
{  cout<<"\n enter element:";
   cin>>arr[top+1];
    top++;
   cout<<top;

}

}
void pop()
{
  if(top=-1)
{
  cout<<"\n underflow";
}
else
{
   top--;
cout<<top;
}
}
void display()
{
   for(int i=top;i>=0;i--)
{
   cout<<"\t"<<arr[i];
}
}
};
int main()
{
    stackarr s1;
    for(int i=0;i<5;i++)
   {
       s1.push();
    }
cout<<"\n stack is:";
s1.display();
s1.pop();
cout<<"\n poped stack is:";
s1.display();
return 0;
}

