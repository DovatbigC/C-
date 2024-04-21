#include<bits/stdc++.h>
using namespace std;
int phucap(string s){
	if(s == "GD")
	return 250000;
	if(s == "PGD")
	return 200000;
	if(s == "TP")
	return 180000;
	if(s == "NV")
	return 150000;
}
class NhanVien{
	public:
		string ma,ten,cv;
		int luong,nc,pc,cong;
		int tg;
		friend istream &operator >> (istream &in,NhanVien &a){
			a.ma= "NV01";
			getline(cin,a.ten);
			cin>>a.luong>>a.nc>>a.cv;
			a.pc=phucap(a.cv);
			a.cong=a.luong*a.nc;
			if(a.nc >=25){
				a.tg=a.cong*0.2;
			}
			else if(a.nc >=22 && a.nc<25){
				a.tg=a.cong*0.1;
			}
			else a.tg=0;
			return in;
		}
		friend ostream &operator << (ostream &out,NhanVien a){
			cout<<a.ma<<" "<<a.ten<<" "<<a.luong*a.nc<<" "<<a.tg<<" "<<a.pc<<" "<<a.cong+a.tg+a.pc<<endl;
			return out;
		}
};
int main(){
	NhanVien n;
	cin>>n;
	cout<<n;
}
