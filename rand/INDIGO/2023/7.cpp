#include<bits/stdc++.h>
using namespace std;
//teammate
const int N=20;
char s[N][N];
int n,m,ans;
bool vis[N][N],used[26];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void dfs(int x,int y,int step) {
    ans=max(ans,step);
    for(int i=0;i<4;i++) {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&!vis[nx][ny]&&used[s[nx][ny]-'A']==false) {
            vis[nx][ny]=true;
            used[s[nx][ny]-'A']=true;
            dfs(nx,ny,step+1);
            used[s[nx][ny]-'A']=false;
            vis[nx][ny]=false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>s[i][j];
        }
    }
    vis[0][0]=true;
    used[s[0][0]-'A']=true;
    dfs(0,0,1);
    cout<<ans<<"\n";
    return 0;
}
