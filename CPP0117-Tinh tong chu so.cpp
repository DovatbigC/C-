#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		while(n>9){
			int s=0;
			while(n>0){
				s+=n%10;
				n/=10;
			}
			n=s;	
		}
		cout<<n<<endl;
	}
	
	
}
