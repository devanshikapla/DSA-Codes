#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

void find_duplicates(string str){
	map<char, int>count;
	for(int i=0; i < str.length(); i++){
		count[str[i]]++;
	}
	for(auto it : count){
		if(it.second > 1){
			cout<<it.first<<endl;
		}
	}
}
int main(int argc, char** argv) {
	string str="Devanshikapla";
	find_duplicates(str);
	return 0;
}
