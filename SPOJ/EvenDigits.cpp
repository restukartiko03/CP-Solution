#include<bits/stdc++.h>
using namespace std;

long long t, ans, tmp;
int n,idx;
string s;

int main(){
	cin>>t;
	while(t--){
		idx++;
		cin>>s;
		ans = 0;
		n = s.length();
		for(int i=0;i+1<s.length();i++){
			tmp = 0;
			if((s[i]-'0')%2){
				if(s[i+1] >= '5'){
					tmp = 10+'0'-s[i+1];
					tmp *= pow(10,n-i-2);
					s[i+1] = '0';
				}
				else{
					tmp = s[i+1]-'0'+1;
					tmp *= pow(10,n-i-2);
					s[i+1] = '8';
				}
				ans += tmp;
				//cout<<s[i]<<" "<<i<<" lol "<<tmp<<endl;
			}
			cout<<i<<" "<<tmp<<" "<<s<<endl;
		}
		if((s[n-1]-'0')%2) ans ++;
		cout<<"Case #"<<idx<<": "<<ans<<endl;;
	}
}
