#include <iostream>
#include <vector>
#include <map>

using namespace  std;

const int N = 3;

void print(int arr[][N], int m)
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    int arr[][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr, 3);
    return 0;
}