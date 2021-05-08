#include <iostream>
#include <queue>
#include <vector>
#define X first
#define Y second
using namespace std;


int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int check(int x, int y);
int visit[105][105] = {
    0,
};
int paint[105][105] = {
    0,
};
int dist[105][105]={0,};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    // vector <vector<int>> paint(n,vector<int>(m,0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >>paint[i][j];
        }
    }
    cout<<"check";
    check(0,0);
    cout << dist[n-1][m-1]+1 << '\n';

    return 0;
}

int check(int x, int y)
{
    // if (visit[x][y] == 1 || paint[x][y] == 0)
    // {
    //     return 0;
    // }
    cout << "check";
    queue<pair<int, int>> Q;
    visit[x][y] = 1;
    Q.push({x, y});

    while (!Q.empty())
    {
        pair<int, int> temp = Q.front();
        Q.pop();

        int nx, ny;
        for (int i = 0; i < 4; i++)
        {
            nx = temp.X + dx[i];
            ny = temp.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (visit[nx][ny] == 1 || paint[nx][ny] == 0)
            {
                continue;
            }
            visit[nx][ny] = 1;
            dist[nx][ny]=dist[temp.X][temp.Y]+1;
            Q.push({nx, ny});
        }
    }
 
    return 1;
}
