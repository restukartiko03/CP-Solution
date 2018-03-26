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

int n,m;
string s[60];
vector<int> ansrow,anscol;
bool col[100], row[100];

void baris(int x);
void colom(int y){
	anscol.pb(y); col[y] = true;
	//cout<<"colom "<<y<<endl;
	vector < int > vec;
	for(int ii=0;ii<n;ii++){
		if(s[ii][y] == '#' && !row[ii]){
			ansrow.pb(ii); row[ii] = true;
			vec.pb(ii);
		}
	}
	for(int ii=0;ii<vec.size();ii++)
		baris(vec[ii]);
}

void baris(int x){
	ansrow.pb(x); row[x] = true;
	vector < int > vec;
	//cout<<"baris "<<x<<endl;
	for(int ii=0;ii<m;ii++){
		if(s[x][ii] == '#' && !col[ii]){
			anscol.pb(ii); col[ii] = true;
			vec.pb(ii);
		}
	}
	for(int ii=0;ii<vec.size();ii++)
		colom(vec[ii]);

}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		ansrow.clear();
		anscol.clear();
		vector <int> temp;
		bool bol = false;
		for(int j=0;j<m;j++){
			if(s[i][j] == '#' && !col[j]){
				temp.pb(j);
				bol = true;
			}
			if(bol){
				ansrow.pb(i); row[i] = true;
				for(int ii=0;ii<temp.size();ii++)
					colom(temp[ii]);
			}
			if(bol){
				for(int ii=0;ii<ansrow.size();ii++){
					for(int jj=0;jj<anscol.size();jj++){
						if(s[ansrow[ii]][anscol[jj]] == '.'){
							cout<<"No"<<endl;
							return 0;
						}
					}
				}
			}
			
		}	
	}
	cout<<"Yes"<<endl;
}
