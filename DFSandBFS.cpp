#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
bool visited[100];
int adj[1024][1024];
queue<int> q;

void DFS(int idx) {//깊이우선탐색Death-first-Search
	
	cout << idx << "  ";

	for (int i = 1; i <= N; i++) {
		if (adj[idx][i] && !visited[i]) {
			visited[i] = 1;
			DFS(i);

		}
	}
}

void BFS(int idx) {
	q.push(idx);
	visited[idx] = 1;
	
	while (!q.empty()) {

		idx = q.front();
		q.pop();

		cout << idx << "  ";

		for (int i = 1; i <= N; i++) {
			if (adj[idx][i] && !visited[i]) {
				visited[i] = 1;
				q.push(i);
			}
		}


	}
}
int main() {

	cin >> N >> M >> V;
	int x, y;
	for (int i = 1; i <= M; i++) {
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	visited[V] = 1;
	DFS(V);
	cout << endl;
	memset(visited, false, sizeof(visited));
	BFS(V);
	cout << endl;

	
}