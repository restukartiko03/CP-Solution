#include<cstdio>

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	if(n == 0 || k == 0){
		printf("0 0\n");
		return 0;
	}
	if(k<n) printf("1 ");
	else printf("0 ");
	n-=k;
	if(k*2 <= n) printf("%d\n",k*2);
	else printf("%d\n",n);
}
