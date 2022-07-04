
#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    string st="Devanshi";
    stack<char>s;
    int n=st.length();
    
    for(int i=0; i < n; i++){
        char ch=st[i];
        s.push(ch); 
    }
    string rev="";
    while(!s.empty()){
        char ch=s.top();
        rev.push_back(ch);
        s.pop();
    }
    cout<<rev<<endl;
    return 0;
}
