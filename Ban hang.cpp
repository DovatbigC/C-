#include<bits/stdc++.h>
using namespace std;
int a=1,b=1,c=1;
class KH{
	public:
		string mkh,tkh,gt,ns,dc;
};
class MH{
	public:
		string mmh,tmh,dvt;
		int gm,gb;
};
KH kh[50];
MH mh[50];
class KhachHang{
	public:
		string mkh,tkh,gt,ns,dc;
		friend istream &operator >> (istream &in,KhachHang &x){
			string s=to_string(a);
			while(s.size()<3){
				s="0"+s;
			}
			x.mkh="KH"+s;
			scanf("\n");
			kh[a-1].mkh=x.mkh;
			getline(cin,x.tkh);
			kh[a-1].tkh=x.tkh;
			cin>>x.gt>>x.ns;
			scanf("\n");
			getline(cin,x.dc);
			kh[a-1].dc=x.dc;
			a++;
			return in;
		}
		friend ostream &operator << (ostream &out,KhachHang x){
			cout<<x.tkh<<" "<<x.dc<<" ";
		}
};
class MatHang{
	public:
		string mmh,tmh,dvt;
		int gm,gb;
		friend istream &operator >> (istream &in,MatHang &x){
			string s=to_string(b);
			while(s.size()<3){
				s="0"+s;
			}
			x.mmh="MH"+s;
			scanf("\n");
			getline(cin,x.tmh);
			cin>>x.dvt;
			cin>>x.gm>>x.gb;
			mh[b-1].mmh=x.mmh;
			mh[b-1].tmh=x.tmh;
			mh[b-1].gm=x.gm;
			mh[b-1].gb=x.gb;
			mh[b-1].dvt=x.dvt;
			b++;
			return in;
		}
		friend ostream &operator << (ostream &out,MatHang x){
			cout<<x.tmh<<" "<<x.dvt<<" "<<x.gm<<" "<<x.gb<<" ";
			return out;
		}
};

class HoaDon{
	public:
		string mhd,mkh,mmh;
		int sl;
		
		friend istream &operator >> (istream &in,HoaDon &x){
			string s=to_string(c);
			while(s.size()<3){
				s="0"+s;
			}
			x.mhd="HD"+s;
			cin>>x.mkh>>x.mmh>>x.sl;
			c++;
			return in;
		}
		friend ostream &operator << (ostream &out,HoaDon x){
			cout<<x.mhd<<" ";
			for(int i=0;i<a;i++){
				if(x.mkh == kh[i].mkh){
					cout<<kh[i].tkh<<" "<<kh[i].dc<<" ";
				}
				
			}
			for(int i=0;i<b;i++){
				if(x.mmh == mh[i].mmh){
					cout<<mh[i].tmh<<" "<<mh[i].dvt<<" "<<mh[i].gm<<" "<<mh[i].gb<<" "<<x.sl<<" "<<mh[i].gb*x.sl<<endl;
				}
			}
			return out;
		}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}


