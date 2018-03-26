#include<bits/stdc++.h>
using namespace std;

const int MAX = 110;

string s[MAX];
int n,xx,yy;
bool visit[MAX][MAX];
string ans = "ALLIZZWELL";

int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {0,1,-1,1,-1,0,1,-1};

bool valid (int i , int j){
	return i >=0 && j >= 0 && j < yy && i < xx;
}

bool dfs ( int x , int y, int index){
	visit[x][y] = true;
	if(index == 9)
		return true;
	for(int i = 0; i<8;i++){
		if(valid(x+dx[i], y+dy[i]) && !visit[x+dx[i]][y+dy[i]]){
			if(s[x+dx[i]][y+dy[i]] == ans[index+1]){
				visit[x+dx[i]][y+dy[i]] = 1;
				bool ret = dfs(x+dx[i], y+dy[i], index+1);
				if(ret) return ret;
				visit[x+dx[i]][y+dy[i]] = 0;
			}
		}
	}
	visit[x][y] = false;
	return false;
}

int main(){
	cin>>n;
	while(n--){
		bool flag = false;
		scanf("%d%d",&xx,&yy);
		for(int i=0;i<xx;i++) cin>>s[i];
		memset(visit, false, sizeof(visit));
		for(int i=0;i<xx;i++){
			for(int j=0;j<yy;j++){
				if(s[i][j] == 'A' && dfs(i,j,0)){
					flag = true;
					break;
				}
			}
			if(flag) break;
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;;
	}
}
