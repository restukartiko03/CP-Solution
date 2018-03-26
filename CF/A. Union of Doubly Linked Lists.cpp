#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector < int > kiri,kanan;
int n,l[110],r[110],p[110];

int findSet(int x){
	return (p[x] == x) ? x : p[x]= findSet(p[x]);
}

bool same ( int x, int y){
	return findSet(x) == findSet(y);
}


int main(){
	for(int i=1;i<=110;i++) p[i] = i;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d%d",&l[i],&r[i]);
		if(l[i] == 0)
			kiri.pb(i);
		if(r[i] == 0)
			kanan.pb(i);
		if(l[i] != 0){
			p[l[i]] = findSet(i);
		}
		if(r[i] != 0){
			p[i] = findSet(r[i]);
		}
	}
	bool bol[110];
	memset(bol, true , sizeof(bol));
	for(int i=1; i<kiri.size();i++){
		for(int j=0 ; j<kiri.size();j++){
			if(!same(kiri[i], kanan[j]) && bol[j]){
				l[kiri[i]] = kanan[j];
				p[kanan[j]] = findSet(kiri[i]);
				r[kanan[j]] = kiri[i]; 
				bol[j] = false;
				break;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d %d\n",l[i],r[i]);
	}
}
