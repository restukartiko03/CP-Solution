#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)

using namespace std;

int n,val[100001],x,y;
bool visit[100001];
vector < int > vec[100001];
queue < int > q;
vector < int > kanan, kiri;

int main(){
	scanf("%d",&n);
	
	memset(visit, false, sizeof(visit));
	memset(val, -1 , sizeof(val));
	bool bipart = false;
	
	for(int i=1;i<n;i++){
		scanf("%d%d",&x,&y);
		if(i == 1){
			q.push(x);
			val[x] = 1;
			visit[x] = true;
		}
		vec[x].pb(y);
		vec[y].pb(x);		
	}
	while(!q.empty()){
		int now = q.front();
		if(val[now]) kiri.pb(now);
		else kanan.pb(now);
		q.pop();
		for(int i=0 ; i<vec[now].size(); i++){
			if(!visit[vec[now][i]]){
				q.push(vec[now][i]);
				val[vec[now][i]] = !val[now];	
				visit[vec[now][i]] = true;
			}
			else if(val[vec[now][i]] == val[now])
				bipart = true;
		}
	}
	if(bipart)
		puts("0");
	else{
		long long ans = 0;
		for(int i=0;i<kiri.size();i++){
			int temp = vec[kiri[i]].size();
			int lol = kanan.size();
			ans += lol-temp;
		}
		cout<<ans<<endl;
	}
}
