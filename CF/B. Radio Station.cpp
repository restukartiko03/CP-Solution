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

/*
.....¦_¯¯¯_¦.......
_¦¦¦¯¦?¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦__¦¦¦¦¦
¦¦¦¦¦¦¦¦¦_¯¦¦¯¯¯¯_
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¯¯_
¦¦¦¦¦¦¦¦¦_¦¦¦¦¦¦¦¦¦¦¯_
¦¦¦¦¯_¦¦¦¦¯_¦¦¦¦¦¦¦¦¦¦¯_
¦¦¦¦¦¦¯_____¦___________¯_
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦__¦¦_¦¦¦¦¦¦¦*/

using namespace std;

int n,m;
string name,ip,nama[1010],add[1010];
map <string, string > mep;

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>name>>ip;
		mep[ip] = name;
	}
	for(int i=1;i<=m;i++){
		cin>>nama[i]>>add[i];
		int len = add[i].length();
		add[i].erase(len-1,1);
	}
	for(int i=1;i<=m;i++){
		cout<<nama[i]<<" "<<add[i]<<";"<<" #"<<mep[add[i]]<<endl;
	}
}
