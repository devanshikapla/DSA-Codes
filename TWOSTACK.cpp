#include <iostream>

using namespace std;

class Stack
{
public :
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s)
    {
        this->size=s;
        int top1=-1;
        int top2=size;
        arr=new int[s];
    }

    void push1(int element)
    {
        if(top2 - top1 > 1)
        {
            top1++;
            arr[top1]=element;
        }
        
    }
    void push2(int element)
    {
        if(top2 - top1 > size)
        {
            top2--;
            arr[top2]=element;
        }
       
    }
    int pop1()
    {
        if(top1 >= 0)
        {
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if(top2 < size)
        {
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    Stack st(5);
    st.push1(78);
    st.push1(54);
    st.push1(5);
    st.push2(32);
    st.push2(0);
    st.push2(34);


    st.pop1();
    st.pop2();
    return 0;
}
