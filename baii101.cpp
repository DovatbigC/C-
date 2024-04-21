#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n];
		long long s=0;
		int ok=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		b[0]=a[0];
		for(int i=1;i<n;i++){
			b[i]=b[i-1]+a[i];
		}
		for(int i=0;i<n;i++){
			if(b[i]-a[i] == s-b[i]){
				ok=1;
				cout<<i+1<<endl;
				break;
			}
		}
		if(ok==0){
			cout<<"-1"<<endl;
		}
	}
}
