#include<bits/stdc++.h>
using namespace std;


const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    int height, width;
    cin >> height >> width;
    int sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    sx--, sy--, gx--, gy--;
    vector<string> maze(height);
    for(int i = 0; i < height; ++i) cin >> maze[i];

    vector<vector<int>> dist(height, vector<int>(width, -1));
    dist[sx][sy] = 0;

    queue<pair<int, int>> que;
    que.push(make_pair(sx, sy));

    while(!que.empty()){
        pair<int, int> current_pos = que.front();
        int x = current_pos.first;
        int y = current_pos.second;
        que.pop();

        for(int direction = 0; direction < 4; ++direction){
            int next_x = x + dx[direction];
            int next_y = y + dy[direction];
            if(next_x < 0 || next_y < 0 || height <= next_x || width <= next_y) continue;
            if(maze[next_x][next_y] == '#') continue;

            if(dist[next_x][next_y] == -1){
                que.push(make_pair(next_x, next_y));
                dist[next_x][next_y] = dist[x][y] + 1;
            }
        }
    }
    cout << dist[gx][gy] << endl;
    return 0;
}