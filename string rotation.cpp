#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool isrotation(string str1 , string str2 ){
    int n=str1.length();
    int m=str1.length();
    if(n!=m){
        return false;
    }
    //string temp=str1+str1;
    else{
        string temp=str1+str1;
        return (temp.find(str2) != string::npos);
    }
}
int main()
{
    string str1="AACD";
    string str2="ACDA";
    if(isrotation(str1, str2)){
        cout<<"Strings are rotation of one another";
    }
    else{
        cout<<"Strings aren't rotation of one another";
    }
    return 0;
}
