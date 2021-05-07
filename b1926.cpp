#include <iostream>
#include <queue>
#include<vector>
#define X first
#define Y second
using namespace std;

int MAX=0;
int counting=0;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n, m;
int check(int x, int y);
int visit[500][500]={0,};
int paint[500][500]={0,};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    cin>>n>>m;
    // vector <vector<int>> paint(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> paint[i][j];
            // cout << paint[i][j];
        }
        //cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            check(i,j);
        }
    }
    cout<<counting<<'\n';
    cout<<MAX;

    return 0;

}

int check( int x, int y){

    int size=0;
    if(visit[x][y]==1 || paint[x][y]==0){
        return 0;
    }

    queue<pair<int,int>> Q;
    visit[x][y]=1;
    Q.push({x,y});
    size++;
    counting+=1;

    while(!Q.empty()){
        pair<int,int> temp=Q.front(); Q.pop();

        int nx,ny;
        for(int i=0;i<4;i++){
            nx=temp.X+dx[i];
            ny=temp.Y+dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m){
                continue;
            }
            if (visit[nx][ny] == 1 || paint[nx][ny] == 0){
                continue;
            }
            visit[nx][ny]=1;
            Q.push({nx,ny});
            size++;
        }
    }
    if (MAX<size){
        MAX=size;
    }
    return 1;

}
