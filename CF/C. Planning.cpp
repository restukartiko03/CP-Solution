#include<bits/stdc++.h>
#define mp make_pair
#define p push
#define pb push_back
#define se second
#define fi first
using namespace std;

long long n,k,x,sum = 0,a[300100];
priority_queue < pair < long long , long long > > q;

int main(){
	scanf("%I64d%I64d",&n,&k);
	for(long long i=1;i<=n;i++){
		scanf("%I64d",&x);
		q.p(mp(x,i));
		if(i >k){
			sum += (i-q.top().se)*q.top().fi;
//			cout<<q.top().fi<<" "<<q.top().se<<" "<<i<<endl;
			a[q.top().se] = i;
			q.pop();
		}
	}
	for(int i=n+1;i<=n+k;i++){
		sum += (i-q.top().se)*q.top().fi;
//		cout<<q.top().fi<<" "<<q.top().se<<" "<<i<<endl;
		a[q.top().se] = i;
		q.pop();
	}
	cout<<sum<<endl;
	for(int i=1;i<n;i++) printf("%I64d ",a[i]);
	printf("%I64d\n",a[n]); 
}
