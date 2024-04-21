#include<bits/stdc++.h>
using namespace std;


string chuanhoa(string s){
	stringstream ss(s);
	string tam;
	string luu;
	while(ss >> tam){
		tam[0]=toupper(tam[0]);
		for(int i=1;i<s.size();i++){
			tam[i]=tolower(tam[i]);
		}
		luu+=tam+" ";
	}
	return luu;
}
class SinhVien{
	public:
		string ma,ten,lop,ns;
		float GPA;
		friend istream &operator >> (istream &in,SinhVien &A){
			A.ma="B20DCCN001";
			getline(cin,A.ten);
			A.ten=chuanhoa(A.ten);
			cin>>A.lop;
			cin>>A.ns>>A.GPA;
			if(A.ns[2] != '/'){
				A.ns="0"+A.ns;
			}
			if(A.ns[5] != '/'){
				A.ns.insert(3,"0");
			}
			return in;		
		}
		friend ostream &operator << (ostream &out,SinhVien A){
			cout<<A.ma<<" "<<A.ten<<" "<<A.lop<<" "<<A.ns<<" "<<fixed<<setprecision(2)<<A.GPA<<endl;
			return out;
		}
		
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

