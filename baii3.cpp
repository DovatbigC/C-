#include<bits/stdc++.h>
using namespace std;

class file{
	public:
		string ngay,nt,ten,sdt;
		friend istream &operator >> (istream &in,file &a){
			cin>>a.ngay>>a.nt;
			scanf("\n");
			getline(cin,a.ten);
			cin>>a.sdt;
			return in;
		}
		friend ostream &operator << (ostream &out,file a){
			cout<<a.ten<<": "<<a.sdt<<" "<<a.nt<<endl;
			return out;
		}
		
};
int main(){
	file n;
	int t;
	ifstream file1;
	file1.open("SOTAY.txt");
	cin>>n;
	file1.close();
	file1.open("DIENTHOAI.txt");
	cout<<n;

}
