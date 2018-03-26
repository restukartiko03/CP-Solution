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

int n,d,kiri,kanan,tmp1,tmp2,ans,a[110];

int main(){
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	kiri = 0; kanan = n-1;
	while((a[kanan] - a[kiri]) > d){
		int ind = 1;
		tmp1 = a[kiri+1] - a[kiri+1-ind];
		tmp2 = a[kanan-ind+1] - a[kanan-1];
		while(tmp1 == tmp2){
			ind++;
			tmp1 = a[kiri+ind] - a[kiri-1+ind];
			tmp2 = a[kanan-ind+1] - a[kanan-ind];
		}
		if(tmp2 > tmp1) kanan--;
		else kiri++;
		ans++;
	}
	cout<<ans<<endl;
}
