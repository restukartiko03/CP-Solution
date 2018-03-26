#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define MOD 10e9+7

using namespace std;

int n,ans,cnt[200010];
queue < int > q;

int main(){
	cin>>n;
	int a[n+1];
	bool bol[n+1],lol[n+1];
	memset(bol,true,sizeof(bol));
	memset(lol,false,sizeof(lol));
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		bol[a[i]] = false;
		cnt[a[i]] ++;
	}
	for(int i=1;i<=n;i++){
		if(bol[i]) q.push(i);
	}
	for(int i=1;i<=n;i++){
		if(cnt[a[i]] > 1){
			if(a[i] < q.front() && !lol[a[i]]){
				lol[a[i]] = true;
				continue;
			}
			cnt[a[i]] --;
			a[i] = q.front();
			q.pop();
			ans ++;
		}
	}
	cout<<ans<<endl;
	for(int i=1;i<n;i++) printf("%d ",a[i]);
	cout<<a[n]<<endl;
}
