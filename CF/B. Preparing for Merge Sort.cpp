#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second		

using namespace std;
vector < int > vec[200010];
int n,a[200010];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int l = 1, r = n;
		while(l <= r){
			int mid = (l+r)/2;
			if(vec[mid].size() == 0 || vec[mid][vec[mid].size()-1] < a[i])
				l = mid + 1;
			else 
				r = mid - 1;
		}
		vec[l-1].pb(a[i]);
	//	cout<<r-1<<endl;
	}
	for(int i=n; i>=1; i--){
		if(vec[i].size() != 0){
			for(int j=0; j<vec[i].size() ; j++)
				printf("%d ",vec[i][j]);
			puts("");
		}
	}
}
