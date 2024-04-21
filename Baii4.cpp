#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;
	}
}	
	return 1;
}
int p[100];
void gan(){
	int i=0;
	int dem=0;
	while(dem<100){
		if(nto(i)){
			p[dem]=i;
			dem++;
		}
		i++;
	}
}
int main(){
	int t;
	gan();
	scanf("%d",&t);
	for(int z=1;z<=t;z++){
	int n;
	scanf("%d",&n);
	int a[100][100];
	int h1=0,h2=n-1,c1=0,c2=n-1;
	int dem=0;
	while(h1<=h2 && c1<=c2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=p[dem];
			dem++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=p[dem];
			dem++;
		}
		c2--;
		if(c1<=c2){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=p[dem];
				dem++;
			}
			h2--;
		}
		if(h1<=h2){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=p[dem];
				dem++;
			}
			c1++;
		}
	}
	printf("Test %d:\n",z);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
}



