#include<bits/stdc++.h>
using namespace std;

int k=1;
int f1=1;
string b[1000];
int h=0;
class TheLoai{
	public:
		string ma1;
		string ten1;	
};
void nhap1(TheLoai &a){
	scanf("\n");
	getline(cin,a.ten1);
	string f=to_string(k++);
	while(f.size()<3){
		f="0"+f;
	}
	a.ma1="TL"+f;
}
class Phim{
	public:
		string ma,theloai,ngay,maphim;
		int tap;
};
void nhap2(Phim &a){
	cin>>a.theloai>>a.ngay;
	scanf("\n");
	getline(cin,a.maphim);
	cin>>a.tap;
	b[h]=a.ngay;
	h++;
	string f=to_string(f1++);
	while(f.size()<3){
		f="0"+f;
	}
	a.ma="P"+f;
}
bool cmp(Phim a,Phim b){
	return a.ngay>b.ngay;	
}
void sapxep(Phim a[],int n){
	sort(a,a+n,cmp);
}
int main(){
	int n,m;
	cin>>n>>m;
	TheLoai A[n];
	Phim B[m];
	for(int i=0;i<n;i++){
		nhap1(A[i]);
	}
	for(int i=0;i<m;i++){
		nhap2(B[i]);
	}
	sapxep(B,m);
	for(int i=0;i<m;i++){
		cout<<B[i].ma<<" ";
		for(int j=0;j<n;j++){
			if(A[j].ma1 == B[i].theloai){
				cout<<A[j].ten1<<" ";
			}
		}
		cout<<B[i].ngay<<" "<<B[i].maphim<<" "<<B[i].tap<<endl;
	}
}



