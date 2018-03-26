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

int n;
ll sum,ans,x,y,tmp,a;
vector < ll > vec;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%I64d",&a);
		ll tmp = sqrt(a);
		if(tmp*tmp == a){
			sum ++;
		}
		else{
			x = a - (tmp*tmp);
			tmp ++;
			y = tmp*tmp - a;
			x = min(x,y);
	//		cout<<x<<endl;
			vec.pb(x);
		}
	}
	//cout<<sum<<endl;
	sort(vec.begin(), vec.end());
	if(sum < n/2){
		sum = (n/2) - sum;
		for(int i=0; i < sum;i++) {
			ans += vec[i];
		//	cout<<vec[i]<<endl;
		}
	}
	else if(sum > n/2){
		ans = sum- n/2;
	}
	else sum = 0;
	cout<<ans<<endl;
}
