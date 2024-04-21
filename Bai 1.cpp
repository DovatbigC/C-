#include<bits/stdc++.h>
using namespace std;
int tcs(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int pt(int n){
	int s=0;
	int tam=n;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			s+=tcs(i);
			n/=i;
		}
	}	
	if(n!=1){
		s+=tcs(n);
	}
	return s;
}

int main(){
	long long n;
	cin>>n;
	if(pt(n)==tcs(n)){
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}
