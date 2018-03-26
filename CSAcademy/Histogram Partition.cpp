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

int n,a[100010],x,tmp,temp,ans;
vector < int > vec[100011];

int main(){
	cin>>n;
	x = 0;
	int mins = 9999999;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		mins = min(mins,a[i]);
	}
	//for(int i=1;i<=n;i++) a[i] -= mins;
	vec[0].pb(a[1]);
	for(int i=2;i<=n;i++){
		while(a[i] >= a[i-1] && i <= n){
			vec[x].pb(a[i]);
			i++;
		}
		while(a[i] <= a[i-1] && i <= n){
			vec[x].pb(a[i]);
			i++;
		}
		if(x > 0)tmp = temp;
		temp = a[i-1];
	//	if(temp == tmp && x > 0) ans --;
		x++;
		if(i <= n)vec[x].pb(a[i]);
		else x--;
	}
	cout<<ans<<endl;
	for(int i=0;i<=x;i++){
		sort(vec[i].begin(),vec[i].end());	
		cout<<vec[i].size()<<endl;
		for(int j=0;j<vec[i].size();j++) cout<<vec[i][j]<<" ";
		line;
		int temp = vec[i][0];
		//if(vec[i][0] == 0) ans--;
		ans ++;
		for(int j=0;j<vec[i].size();j++){
			if(vec[i][j] != temp){
				temp = vec[i][j];
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
