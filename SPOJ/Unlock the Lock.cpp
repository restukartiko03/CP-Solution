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

int idx,n,start,finish,a[10], val[10000],tmp,p;
bool visit[10000];
queue < int > q;

int main(){
	while(cin>>start>>finish>>n){
		idx++;
		if(!start && !finish && !n) return 0;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		memset(visit, false, sizeof(visit));
		for(int i=0;i<10000;i++) val[i] = 1000000000;
		q.p(start);
		val[start] = 0; visit[start] = true;
		while(!q.empty()){
			p = q.front(); q.pop();
			//cout<<p<<endl;
			for(int i=0;i<n;i++){
				tmp = p + a[i];
				tmp%=10000;
				if(!visit[tmp]){
					visit[tmp] = 1;
					q.p(tmp);
					val[tmp] = min(val[tmp],val[p]+1);
				}
			}
		}
		cout<<"Case "<<idx<<": ";
		if(val[finish] != 1000000000) cout<<val[finish]<<endl;
		else cout<<"Permanently Locked"<<endl;
	}
}
