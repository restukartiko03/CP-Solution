#include<bits/stdc++.h>
using namespace std;

string s,ss,good;
int l,ll,n;

bool baik( string s,char ss){
	int lo = s.length();
	for(int j=0;j<lo;j++) if(s[j] == ss) return true;
	return false;
}

int main(){
	cin>>good;
	cin>>s;
	cin>>n;
	l = s.length();
	for(int ii=1;ii<=n;ii++){
		cin>>ss;
		bool cek = true;
		ll = ss.length();
		int i = 0;
		if((ll+1)>=l){
			//cout<<"hai"<<endl;
			while(s[i] != '*' && i<l){
				if(s[i] == '?'){
					if(!baik(good,ss[i]))
						cek = false;
				}
				else if(s[i] != ss[i]) cek = false;
				i++;
			}
			bool ketemu = true;
			if(i == l) ketemu = false;
			//cout<<"hai"<<endl;
			for(int j=i; j<=i+ll-l;j++){
				if(baik(good,ss[j])) cek = false;
			//	cout<<"ads"<<endl;
			}
		//	cout<<i<<endl;
			i++;
			for(int j=i+ll-l;j<ll;j++){
				if(s[i] == '?'){
					if(!baik(good,ss[j]))
						cek = false;
				}
				else if(s[i] != ss[j])
					cek = false;
			//	cout<<j<<endl;
				i++;
			}
			if(!ketemu && ll>l) cout<<"NO"<<endl;
			else if(cek) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		//string cop = s;
		//for(int i=0;i<l;i++) if(cop[i] == '*') cop.erase(i,1);
		else cout<<"NO"<<endl;
	}
}
