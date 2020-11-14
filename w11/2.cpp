#include <iostream>
#include <queue>

using namespace std;


int a[100][100];
queue<pair<int, int> > q;
int n, m;

int mx = 0;

void step(int row, int column, int value){
    if(row < n && column < m && a[row][column] == -1){
        a[row][column] = value;
        mx = max(mx, value);
        q.push(make_pair(row, column));
    }
}

int main() {


    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = -1;
        }
    }

    int r, c;
    cin >> r >> c;
    r--;
    c--;


    q.push(make_pair(r, c));
    a[r][c] = 0;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        step(x + 1, y, a[x][y] + 1);
        step(x - 1, y, a[x][y] + 1);
        step(x, y + 1, a[x][y] + 1);
        step(x, y - 1, a[x][y] + 1);
        q.pop();
    }

    for(int i = 0 ; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << mx << endl;


    return 0;
}
