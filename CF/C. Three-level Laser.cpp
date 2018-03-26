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

ll n,u,a[100010],awal,akhir,mid;

int main(){
	double maks = 0,lol;
	cin>>n>>u;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i+1<n;i++){
		awal = i; akhir = n-1;
		int tmp = a[i];
		while(awal <= akhir){
			mid = (awal+akhir)/2;
			if((a[mid]-a[i]) <= u){
				tmp = a[mid];
				awal = mid+1;
			}
			else{
				akhir = mid-1;
			}
		}	
		lol = double(tmp-a[i+1])/double(tmp-a[i]);
		maks = max(lol,maks);
	}
	if(maks)
		printf("%.11lf\n",maks);
	else
	 cout<<"-1"<<endl;
}

