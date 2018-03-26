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

int n,m,jawab;
bool bol[1010], a[50],cek[1000][50];
string sss,ss,s[1010];
vector < string > vec;

int main(){
	cin>>n;
	cin>>ss;
	memset(a,false, sizeof(a));
	memset(bol , true, sizeof(bol));
	for(int i=0;i<ss.length();i++)
		a[ss[i] -'a'] = true;
	cin>>m;
	int cnt = m;
	for(int i=1;i<=m;i++){
		cin>>s[i];
		for(int j=0;j<s[i].length();j++){
			if(ss[j] == '*'){
				if(a[s[i][j] -'a'])
					bol[i] = false;	
			}
			else if(s[i][j] != ss[j])
				bol[i] = false;
		}
		if(!bol[i]) cnt--;
	}
	for(int i=1;i<=m;i++){
		if(bol[i]){
			for(int j=0;j<s[i].length();j++){
				if(ss[j] == '*'){
					if(!cek[i][s[i][j] -'a'])
						cek[i][s[i][j] - 'a'] = true;
				}
			}
		}
	}
	jawab = 0;
	//cout<<cnt<<endl;
	if(cnt == 1){
		//cout<<"masuk < 1"<<endl;
		for(int i=1;i<=m;i++){
			if(bol[i]){
				for(int j=0;j<26;j++)
					if(cek[i][j]) jawab++;
			}
			if(jawab > 0) break;
		}	
	}
	else{
		//cout<<"masuk > 1"<<endl;
		for(int i=0;i<26;i++){
			jawab++;	
			for(int j=1;j<=m;j++){
				if(bol[j] && !cek[j][i]){
					jawab--;
					break;
				}		
			}
		}
	}
	cout<<jawab<<endl;
}
