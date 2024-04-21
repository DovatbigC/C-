#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a1,a2;
		float a3,a4;
		cin>>a1>>a2>>a3>>a4;
		float b1,b2;
		if( a1 >=39 && a1<=40 ){
			b1=9.0;
		}
		else if( a1 >=37 && a1<=38 ){
			b1=8.5;
		}
		else if( a1 >=35 && a1<=36 ){
			b1=8.0;
		}else if( a1 >=33 && a1<=34 ){
			b1=7.5;
		}else if( a1 >=30 && a1<=32 ){
			b1=7.0;
		}else if( a1 >=27 && a1<=29 ){
			b1=6.5;
		}else if( a1 >=23 && a1<=26 ){
			b1=6.0;
		}else if( a1 >=20 && a1<=22 ){
			b1=5.5;
		}else if( a1 >=16 && a1<=19 ){
			b1=5.0;
		}else if( a1 >=13 && a1<=15 ){
			b1=4.5;
		}else if( a1 >=10 && a1<=12 ){
			b1=4.0;
		}else if( a1 >=7 && a1<=9 ){
			b1=3.5;
		}else if( a1 >=5 && a1<=6 ){
			b1=3.0;
		}else if( a1 >=3 && a1<=4 ){
			b1=2.5;
		}
		if( a2 >=39 && a2<=40 ){
			b2=9.0;
		}
		else if( a2 >=37 && a2<=38 ){
			b2=8.5;
		}
		else if( a2 >=35 && a2<=36 ){
			b2=8.0;
		}else if( a2 >=33 && a2<=34 ){
			b2=7.5;
		}else if( a2 >=30 && a2<=32 ){
			b2=7.0;
		}else if( a2 >=27 && a2<=29 ){
			b2=6.5;
		}else if( a2 >=23 && a2<=26 ){
			b2=6.0;
		}else if( a2 >=20 && a2<=22 ){
			b2=5.5;
		}else if( a2 >=16 && a2<=19 ){
			b2=5.0;
		}else if( a2 >=13 && a2<=15 ){
			b2=4.5;
		}else if( a2 >=10 && a2<=12 ){
			b2=4.0;
		}else if( a2 >=7 && a2<=9 ){
			b2=3.5;
		}else if( a2 >=5 && a2<=6 ){
			b2=3.0;
		}else if( a2 >=3 && a2<=4 ){
			b2=2.5;
		}
		double kq2=(b1+b2+a3+a4)*1000;
		kq2/=4;
		long long t=kq2;
		int g=t%1000;
		if(g==0 || g==500){
			double f=kq2/1000;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
		else if(g==250 || g==750){
			double f=(kq2+250)/1000;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
		else if(g==125 || g==625){
			double f=(kq2-125)/1000;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
		else if(g==375 || g==875){
			double f=(kq2+125)/1000;
			cout<<fixed<<setprecision(1)<<f<<endl;
		}
	}
}
