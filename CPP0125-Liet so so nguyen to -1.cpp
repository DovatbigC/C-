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
	int a,b;
	cin>>a>>b;
	if(a>b){
		for(int i=b;i<=a;i++){
			if(nt(i)){
				cout<<i<<" ";
			}
		}
	}
	if(b>a){
		for(int i=a;i<=b;i++){
			if(nt(i)){
				cout<<i<<" ";
			}
		}
	}
	
}
