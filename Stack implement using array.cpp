#include <iostream>
#include <stack>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Stack{
	public: //initial values;
		int *arr;
		int n;
		int top;
		//Constructor
		Stack(int size){
			this->n=size;
			arr=new int (size);
			top=-1;
		}
		void push(int element){
			if((n-top)> 1){
				top++;
				arr[top]=element;				
			}
			else{
				cout<<"Stack Overflow"<<endl;
			}
		}
		void pop(){
			if(top >= 0){
				top--;
			}
			else{
				cout<<"Stack underflow";
			}
			
		}
		int peek(){
			if(top >=0 && top < n){
				return arr[top];
			}
			else{
				cout<<"Stack is empty"<<endl;
				return -1;
			}
			
		//	return arr[top];
		}
		bool isempty(){
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
};
int main(){
	Stack st(5);
	st.push(5);
	st.push(54);
	st.push(43);
//	cout<<st.peek()<<endl;
	st.pop();
	cout<<st.peek()<<endl;
	if(st.isempty()){
		
		cout<<"Stack is empty"<<endl;
	}
	else{
		cout<<"Stack is empty"<<endl;
	}
}
