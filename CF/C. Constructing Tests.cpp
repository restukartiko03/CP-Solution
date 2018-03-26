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

int n, a[110],l,r,mid,tmp,maks,mins;
bool found ;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		found = false;
		if(a[i] == 0){
			printf("1 1\n");
			continue;
		}
		tmp = sqrt(a[i]);
		if(tmp * tmp != a[i]) tmp++;
		for(int j=1;j<=tmp;j++){
			mid = a[i]/j;
			r = (mid-j)/2;
			l = mid-r;
			if(!l || !r) continue;
			maks = max(r,l);
			mins = min(r,l);	
			r = maks*maks - (maks/mins)*(maks/mins);
			if( r == a[i] && r!=0 && l!=0){
				printf("%d %d\n",maks,mins);
				found = true;
				break;
			}
		}
		if(!found) printf("-1\n");
	}
}
