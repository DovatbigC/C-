#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int tong=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			tong+=a[i];
		}
		int ok=0;
		int z;
		int tong2=0;
		for(int i=0;i<n;i++){
			tong2+=a[i];
			for(int j=i+1;j<n;j++){
				tong-=a[j];
			}
			if(tong2==tong){
				z=i;
				ok=1;
				break;
			}
		}
		if(ok){
			cout<<z<<endl;
		}
		else cout<<"-1\n";
	}
}
