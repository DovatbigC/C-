#include<iostream>
#include<math.h>

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
		int m,n;
		cin>>m>>n;
		if(m>n){
			for(int i=n;i<=m;i++){
				if(nt(i)){
					cout<<i<<" ";
				}
			}
			
		}
		else{
			for(int i=m;i<=n;i++){
				if(nt(i)){
					cout<<i<<" ";
				}
			}
		}
		cout<<endl;
	}
}
