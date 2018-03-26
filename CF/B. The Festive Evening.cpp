#include<bits/stdc++.h>
using namespace std;

int n,m,a[100],arr[100],jaga;
string s;
map < char , bool > mep;

int main(){
	for(int i='A';i<='Z';i++){
		char x = i;
		mep[x] = false;
	}
	cin>>n>>m;
	bool cek = true;
	cin>>s;
	for(int i=0;i<n;i++)
		arr[s[i]-'A'] ++;
	for(int i=0;i<n;i++){
		if(!mep[s[i]]){
			mep[s[i]] = true;
			jaga ++;
			if(jaga > m) cek = false;
			a[s[i] -'A'] ++;
			if(a[s[i]-'A'] == arr[s[i] -'A']) jaga--;
		}
		else{
			a[s[i] - 'A'] ++;
			if(a[s[i]-'A'] == arr[s[i] -'A']) jaga--;
		}
	//	cout<<jaga<<" "<<a[s[i]-'A']<<endl;
	}
	if(cek) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
