/*Implement using C++. Use classes for each. Make sure warning messages are printed whenever required. (For example: Popping out from an empty queue.)
Stacks using Linked List (Name for class: StackLL) (push, pop, size, isEmpty, top)
Queues using Linked List (Name for class: QueueLL) (enqueue, dequeue, size, isEmpty, top)
Stacks using Arrays (Name for class: StackArr)
Queues using Arrays (Name for class: QueueArr)
Implement a queue using two stacks.
    [Hint: You already have a stack implemented (Q1). Now you have to implement a queue using not the generic setup that you did in Q1 rather implement it using the functions and data (top pointer) of two stacks]
Implement a Stack using Queue(s).
*/

//stack implementing through linked list
#include"linkedlist.cpp"
#include<iostream>
class queue
{
   public:
   node*front;
   node*rear;
   ll l2;
   queue()
{
   front=l2.tail;
    rear=l2.head;
}

void enqueue()
{
  int value;
   cout<<"\n ENTER THE VALUE YOU WANT TO ADD:";
   cin>>value;
   l2.insertat(1,value);
   rear=l2.head;
  
}
void dequeue()
{
  
   l2.remove();
   front=l2.tail;
   rear=l2.head;
}
int size()
{
   cout<<"\n size of queue is:";
   return l2.countitem();
}
void display()
{
 
   l2.display();

}
};
int main()
{
  queue q1;
 
  for(int i=0;i<5; i++)
{
   q1.enqueue();
}

cout<<"\n queue is:";
q1.display();
cout<<q1.size();

q1.enqueue();
cout<<"\nenqueued array is:";
q1.display();
cout<<q1.size();

q1.dequeue();
cout<<"\ndequeued array:";
q1.display();
cout<<q1.size();

return 0;
}


