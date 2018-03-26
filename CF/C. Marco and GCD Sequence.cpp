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

int n,a[1000100],b[1000100],fpb,sum;
bool ada;
vector <int > vec;

bool binser ( int awal, int akhir, int nilai){
	int mid;
	while(awal <= akhir){
		mid = (awal+akhir)/2;
		if(a[mid] == nilai){
			return true;
		}
		else{
			if(nilai > a[mid])
				awal = mid + 1;
			else
				akhir = mid-1;
		}
	}
	return false;
}

int main(){
	_FAST;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]] = 1;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++){
		int fpb = a[i];
		for(int j=i+1;j<=n;j++){
			fpb = __gcd(fpb,a[j]);
			if(!b[fpb])
				ada = true;
		}
	}
	for(int i=1;i<n;i++){
		int fpb = a[i];
		for(int j=i+1;j<=n;j++){
			fpb = __gcd(fpb,a[j]);
			if(binser(1,i-1,fpb) && fpb < a[i]){
				b[fpb] = 0;
			}
		}
	}
	if(ada)
		cout<<"-1"<<endl;
	else{
		for(int i=1;i<=n;i++){
			if(b[a[i]])
				vec.pb(a[i]);
		}
		int tmp = vec.size();
		cout<<tmp<<endl;
		for(int i=0;i+1<vec.size();i++)
			printf("%d ",vec[i]);
		printf("%d\n",vec[tmp-1]);
	}
}
