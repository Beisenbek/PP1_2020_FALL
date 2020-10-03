#include <iostream>
#include <cmath>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,m;

	cin >> n >> m;

	int a[n][m]; 

	int mx = -1;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			mx = max(mx,a[i][j]);
		}
	}

	int cnt = 0;
	int s[n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(mx == a[i][j]){
				s[cnt] = i;
				cnt++;
				break;
			}
		}
	}

	cout << cnt << endl;
	
	for(int i = 0; i < cnt; ++i){
		cout << s[i] << " ";
	}


	return 0;
}