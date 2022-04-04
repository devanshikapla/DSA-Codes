
#include<iostream>
#include<stack>
using namespace std;

int scoreofbrackets(string S)
{
    stack<string>s;
    int i=0;
    int ans=0;
    while(i < S.length())
    {
        if(S[i]=='(')
        {
            s.push("(");
        }
        else
        {
            
        
            if(s.top()=="("){  
                s.pop();
                s.push("1");
            }
                else
                {
                    int count=0;
                    while(s.top()!="(")
                    {
                        count=count+stoi(s.top());
                        s.pop();
                    }
                    s.pop();
                    s.push(to_string(2*count));
                }
        }
        i++;
    }
    while(!s.empty())
    {
        ans=ans+stoi(s.top());
        s.pop();
    }
    return ans;
}
int main()
{
    string s1="(()(((()))))";
    cout<<scoreofbrackets(s1)<<endl;
}
