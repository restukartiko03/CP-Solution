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
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 10e9+7

using namespace std;

int n,x,pivot;
vector < int > vec;
bool bol[300010];

int main(){
	cin>>n;
	vec.pb(1);
	memset(bol,false,sizeof(bol));
	pivot = n;
	int ans = 1;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		ans++;
		if(x == pivot){
			bol[x] = true;
			while(bol[pivot] && pivot > 0){
				pivot--;
				ans--;
			}
			vec.pb(ans);
			
		}
		else{
			bol[x] = true;
			vec.pb(ans);
		}
	//cout<<ans<<" "<<pivot<<endl;
	}
	for(int i=0;i<vec.size();i++)
		printf("%d ",vec[i]);
	printf("\n");
}
