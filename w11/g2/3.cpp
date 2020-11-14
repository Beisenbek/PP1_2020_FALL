#include <iostream>
#include <queue>

using namespace  std;

int a[8][8];
queue<pair<int, int> >q;

void step(int x, int y, int v){
    if(x >= 0 && y >= 0 && x < 8 && y < 8){
        if(a[x][y] == -1){
            q.push(make_pair(x, y));
            a[x][y] = v;
        }
    }
}

int main() {

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            a[i][j] = -1;
        }
    }

    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    a1--; b1--;
    a2--; b2--;

    a[a1][b1] = 0;


    q.push(make_pair(a1, b1));

    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        step(r + 1, c + 2, a[r][c] + 1);
        step(r + 1, c - 2, a[r][c] + 1);
        step(r - 1, c + 2, a[r][c] + 1);
        step(r - 1, c - 2, a[r][c] + 1);
        step(r + 2, c + 1, a[r][c] + 1);
        step(r + 2, c - 1, a[r][c] + 1);
        step(r - 2, c + 1, a[r][c] + 1);
        step(r - 2, c - 1, a[r][c] + 1);
    }

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << a[a2][b2] << endl;


    return 0;
}
