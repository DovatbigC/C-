#include<bits/stdc++.h> 
using namespace std;

int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		int dem=0;
		if(l>r){
			for(int i=r;i<=l;i++){
				if(nt(i)){
					dem++;
				}
			}
		}
		else{
			for(int i=l;i<=r;i++){
				if(nt(i)){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
	
}

