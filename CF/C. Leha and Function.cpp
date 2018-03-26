#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	scanf("%d",&n);
	int a[n],ans[n];
	pair < int, int > per[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++) scanf("%d",&per[i].first),per[i].second = i;
	sort(a,a+n);
	sort(per,per+n);
	for(int i=0;i<n;i++)
		ans[per[i].second] = a[n-1-i];
	for(int i=0;i<n-1;i++) printf("%d ",ans[i]);
	printf("%d",ans[n-1]);
}
