#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long f1=0,f2=1;
		int ok=1;
		if(n==0){
			cout<<"YES\n";
			break;
		}
		for(int i=0;i<n;i++){
			long long fn=f1+f2;
			f1=f2;
			f2=fn;
			if(n==fn){
				ok=1;
				cout<<"YES\n";
				break;
			}
			else ok=0;
			if(fn>n){
				break;
			}
		}
		if(ok==0){
			cout<<"NO\n";
		}
	}
}
