#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int R, C, sy, sx, gy, gx;
	cin >> R >> C >> sy >> sx >> gy >> gx;

	// 1-indexed で扱うため、行数は R+1 にしておく
	vector<string> G(R + 1);
	for (int i = 1; i <= R; i++)
	{
		cin >> G[i]; // 各行の迷路情報を読み込む。例："..#." のような文字列
	}

	// 移動手数を記録する2次元ベクトル。初期値は -1（未訪問）
	vector<vector<int>> dist(R + 1, vector<int>(C + 1, -1));

	// BFSのためのキュー（座標ペアを扱う）
	queue<pair<int, int>> Q;

	// スタート地点の距離は0
	dist[sy][sx] = 0;
	Q.push({sy, sx});

	// 上下左右の移動方向
	int dy[4] = {-1, 1, 0, 0};
	int dx[4] = {0, 0, -1, 1};

	while (!Q.empty())
	{
		auto [y, x] = Q.front();
		Q.pop();

		// ゴールに到達したら終了
		if (y == gy && x == gx)
		{
			cout << dist[y][x] << endl;
			return 0;
		}

		// 4方向への移動を試みる
		for (int d = 0; d < 4; d++)
		{
			int ny = y + dy[d];
			int nx = x + dx[d];

			// 盤面内かつ、空きマス ('.') で、まだ訪れていなければ
			if (ny >= 1 && ny <= R && nx >= 1 && nx <= C && G[ny][nx - 1] == '.' && dist[ny][nx] == -1)
			{
				// 注意: G[ny] は string 型なので、0-indexed でアクセスするため nx-1 となる
				dist[ny][nx] = dist[y][x] + 1;
				Q.push({ny, nx});
			}
		}
	}

	return 0;
}
