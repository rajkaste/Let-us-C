#include <iostream>
using namespace std;
int stack[100], n=100, top=-1,minimum;
void push(int val) {
    if(top==-1)
    {
        top++;
        stack[top]=val;
        minimum=stack[top];
    }
   else if(top>=n-1)
   {
        cout<<"Stack Overflow"<<endl;
   }
   
   else {
        top++;
        stack[top]=val;
        if (stack[top]<minimum)
        {
            minimum=stack[top];
        }
        
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Display Minimum"<<endl;
    cout<<"5) Exit"<<endl;
   do {
      cout<<"\nEnter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"\nEnter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4:
            cout<<"\nMinimum Is: "<<minimum;
            break;
         case 5: {
            cout<<"\nExit"<<endl;
            break;
         }
         default: {
            cout<<"\nInvalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}