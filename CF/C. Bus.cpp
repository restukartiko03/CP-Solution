#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define MOD 10e9+7

using namespace std;

int a,b,f,k,decr,decc,ans;
bool balik,imp;	

int main(){
	cin>>a>>b>>f>>k;
	int pos = 0;
	int refil = b;
	balik = false;
	while(k){
		cout<<pos<<" "<<b<<endl;
	//	getchar();
		if(!balik){
			if(b >= (a-pos)){
				b -= a-pos;
				balik = true;
				k--;
				pos = a;
			}
			else{
				if(pos < f && b >= (f-pos)){
					b = refil;
					pos = f;
					ans++;
				}
				else{
						imp = true;
				}
			}
		}
		else{
			if(b >= (a-pos)){
				b -= a-pos;
				balik = false;
				k--;
				pos = 0;
			}
			else{
				if(pos > f && b >= (pos-f)){
					b = refil;
					pos = f;
					ans++;
				}
				else{
						imp = true;
				}
			}			
		}
	}
	if(imp) puts("-1");
	else cout<<ans<<endl;
}
