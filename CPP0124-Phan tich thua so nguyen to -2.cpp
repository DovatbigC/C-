#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		int dem=0;
		if(n%i==0){
			while(n%i==0){
				n/=i;
				dem++;
			}
			cout<<i<<" "<<dem<<endl;
		}
		
	}
	if(n!=1)
	cout<<n<<" 1";
	
}
