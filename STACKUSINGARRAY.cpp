#include <iostream>

using namespace std;

class Stack
{
   public :
       int *arr;
       int top;
       int size;
       Stack(int size)
       {
           this->size=size;
           arr=new int[size];
           top=-1;
       }

       void push(int element)
       {
           if(size-top > 1)
           {
               top++;
               arr[top]=element;
           }
           else
           {
               cout<<"Stack Overflow"<<endl;
           }
       }
       void pop()
       {
           if(top >= 0)
           {
               top--;
           }
           else
           {
               cout<<"Stack Underflow"<<endl;
           }
       }
       int peek()
       {
           if(top >= 0 && top < size)
           {
               return arr[top];
           }
           else
           {
               cout<<"Stack is empty "<<endl;
               return -1;
           }
       }
       bool is_empty()
       {
          if(top==-1)
          {
              return true;
          }
          else
          {
              return false;
          }
       }
};
int main()
{
    Stack st(5);
    st.push(56);
    st.push(90);
    st.push(53);
    

    cout<<st.peek()<<endl;
    st.pop();
    
    return 0;
}
