#include<bits/stdc++.h>
using namespace std;

long long max(string a){
	long long s=0;
	for(int i=0;i<a.size();i++){
		if(a[i] == '5'){
		a[i]='6';
		}
		s=s*10+a[i]-'0';
	}
	return s;
}
long long min(string a){
	long long s=0;
	for(int i=0;i<a.size();i++){
		if(a[i] == '6'){
		a[i]='5';
		}
		s=s*10+a[i]-'0';
	}
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		cout<<min(a)+min(b)<<" "<<max(a)+max(b)<<endl;
	}
	
}

