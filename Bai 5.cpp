#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int max=0;
		long long b[n];
		b[n]=k;
		for(int i=0;i<n;i++){
			b[i]=a[i];
		}
		sort(b,b+n+1);
		for(int i=0;i<n+1;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
