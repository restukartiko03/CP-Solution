#include<bits/stdc++.h>
using namespace std;

char c[2000000];
int n,leng,x,a,maks;
string s;

int main(){
	for(int i=0;i<1000100;i++) c[i] = '0';
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		int leng = s.length();
		scanf("%d",&x);
		for(int j=1;j<=x;j++){
			scanf("%d",&a);
			maks = max(maks,a+leng);
			for(int ii=a;ii<a+leng;ii++) c[ii] = s[ii-a];
		}
	}
//	for(int i=1;i<maks;i++) printf("%c",c[i]); 
//	cout<<endl;
	for(int i=1;i<maks;i++){
		if(c[i] == '0') printf("a");
		else printf("%c",c[i]);
	}
	cout<<endl;
}
