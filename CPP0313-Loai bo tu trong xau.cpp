#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	stringstream ss(s1);
	string tam;
	while(ss >> tam){
		if(tam!=s2){
			cout<<tam<<" ";
		}
	}
}
