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

int tmp,idx;
string n,m,cek,ans;
bool lol;

int main(){
	cin>>n>>m;
	sort(n.begin(), n.end());
	reverse(n.begin(), n.end());
	if(m.length() > n.length()){
		cout<<n<<endl;
		return 0;
	}
	for(int i=1;i<n.length();i++){
		ans += n[i];
	}
	for(int i=1;i<n.length();i++){
		cek += m[i];
	}
	reverse(ans.begin(), ans.end());
	if(ans > cek){
		tmp = 0;
		while(n[tmp] == n[0]) tmp++;
		swap(n[tmp], n[0]);
		idx = 1;
	}
	cout<<n<<endl;
	while(idx < n.length()){
		if(lol){
			tmp = idx;
			for(int i=idx; i<n.length();i++){
				if(n[i] > n[tmp]) tmp = i;
			}
			swap(n[idx],n[tmp]);
		}
		else if(n[idx] > m[idx]){
			tmp = idx+1;
			while(n[tmp] > m[idx] && tmp < n.length())
				tmp++;
			for(int i=tmp; i<n.length(); i++){
				if(n[i] > n[tmp] && n[i] <= m[idx]){
					tmp = i;
				}
			}
			swap(n[tmp], n[idx]);
		}
		else{
			tmp = idx;
			for(int i=idx+1; i<n.length(); i++){
				if(n[i] > n[tmp] && n[i] <= m[idx]){
					tmp = i;
				}
			}
			swap(n[tmp], n[idx]);
		}
		if(n[idx] < m[idx]) lol = true;
		cout<<n<<" "<<idx<<endl;
		getchar();
		idx++;
	}
	cout<<n<<endl;
}
