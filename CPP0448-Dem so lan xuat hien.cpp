#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		int ok=0;
		for(int i=0;i<n;i++){
			if(a[i]==k){
				cout<<mp[a[i]]<<endl;
				ok=1;
				break;	
			}
			
		}
		if(ok == 0){
			cout<<"-1\n";
		}
	}
}
