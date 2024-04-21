#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int bai=0;
	cin.ignore();
	int a[t];
	for(int i=0;i<t;i++){
		a[i]=0;
	}
	for(int i=0;i<t;i++){
		int dem=0;
		string s;
		getline(cin,s);
		string tam;
		stringstream ss(s);
		while(ss >> tam){
			dem++;
		}
		a[i]=dem;
	}
	for(int i=0;i<t;i++){
		if((a[i]==8 && a[i+1]==7)||(a[i]==8 && i==t-1 )){
			bai++;
		}
		if((a[i]==7 && a[i+1]==7 &&a[i+2]==7 &&a[i+3]==7 )){	
			bai++;
			i+=3;
		}
	}
	cout<<bai<<endl;
	for(int i=0;i<t;i++){
		if((a[i]==8 && a[i+1]==7)||(a[i]==8 && i==t-1 )){
			cout<<"1"<<endl;
		}
		if((a[i]==7 && a[i+1]==7 &&a[i+2]==7 &&a[i+3]==7)){	
			cout<<"2"<<endl;
			i+=3;
		}
	}
}


