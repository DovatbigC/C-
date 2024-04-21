#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n=s.size();
		int k=0;
		for(int i=0;i<n;i++){
			if(k==0){
			if(s[0]=='+'&& s[1]=='8'&& s[2]=='4' ){
				cout<<"0";
				i+=3;
				k=1;	
			}
			else if(s[0]=='8' && s[1]=='4'){
				cout<<"0";
				i+=2;
				k=1;
			}
		}
			if(isdigit(s[i])){
				cout<<s[i];
			}
		}	
		cout<<endl;
	}
	
	
}
