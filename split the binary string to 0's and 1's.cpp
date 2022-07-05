#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int maxsubstr(string str, int n){
    int count0=0;
    int count1=0;
    int countequal=0;
    for(int i=0; i < n; i++){
        if(str[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
        if(count0==count1){
            countequal++;
        }
            
        
    }
       if(count0!=count1){
            return -1;
        }
    return countequal;
}
int main()
{
    //cout<<"Hello World";
    string str="0100110101";
    int n=str.length();
    cout<<maxsubstr(str,n);
    

    return 0;
}
