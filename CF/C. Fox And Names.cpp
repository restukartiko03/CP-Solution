#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
using namespace std;

bool bol,abjad[50],edge[50][50];
int n,j;
string s[105],ans;

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0; i<='z'-'a';i++)
		abjad[i] = false;
	for(int i=1;i<n;i++){
		for(j=0;s[i][j] == s[i-1][j];j++)
			if(!s[i][j]) break;
		if(s[i][j] && s[i-1][j])
			edge[s[i-1][j]-'a'][s[i][j]-'a']=1;//cout<<s[i-1][j]-'a'<<" "<<s[i][j]-'a'<<endl;
		if(!s[i][j] && s[i-1][j]){
			cout<<"Impossible"<<endl;
			return 0;
		}
	}
	for(int i=0;i<26;i++){
		int idx;
		for(idx=0;idx<26;idx++){
			if(abjad[idx]) continue;
			bol = false;
			for(int j=0;j<26;j++){
				bol |= edge[idx][j];
			}
			if(!bol)
				break;
		}
		//cout<<idx<<" "<<char(idx+'a')<<endl;
		ans = char(idx+'a')+ans;
		if(idx == 26){
			cout<<"Impossible"<<endl;
			return 0;
		}
		for(int j=0;j<26;j++)
			edge[j][idx] = 0;
		abjad[idx] = true;
	}
	cout<<ans<<endl;
}
