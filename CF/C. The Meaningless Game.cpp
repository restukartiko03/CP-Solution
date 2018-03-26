#include<bits/stdc++.h>
using namespace std;

int n;
long long x,y,awal,akhir,tengah;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%I64d%I64d",&x,&y);
		unsigned long long ans = x*y;
		awal = 1; akhir = 1000000;;
		bool ketemu = false;
		while(1){
			tengah = (awal+akhir)/2;
			unsigned long long cek = tengah*tengah*tengah;
//			cout<<cek<<endl;
			if(cek == ans){
				ketemu = true;
				break;
			}
			else if(cek > ans)
				akhir = tengah-1;
			else
				awal = tengah+1	;
	//		cout<<awal<<" "<<tengah<<" "<<akhir<<endl;
			if(awal > akhir){
				break;
			}
		}		 
		if(ketemu) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
