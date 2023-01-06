/* 알고리즘 - 깊이 우선 탐색 1 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
dfs(V, E, R) {  # V : 정점 집합, E : 간선 집합, R : 시작 정점
visited[R] <- YES;  # 시작 정점 R을 방문 했다고 표시한다.
for each x ∈ E(R)  # E(R) : 정점 R의 인접 정점 집합.(정점 번호를 오름차순으로 방문한다)
if (visited[x] = NO) then dfs(V, E, x);
}
*/

int cnt[100001] = {
    0,
};
bool visited[100001] = {false};
vector<int> v[100001]; // v[i] -> 정점 i가 가지는 간선들의 정보. i는 간선 번호
int c = 1;

void dfs(int R)
{
    cnt[R] = c++;

    visited[R] = true; // 시작 정점 R을 방문했음

    sort(v[R].begin(), v[R].end());

    for (int i : v[R])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

int N, M, R;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> N >> M >> R;

    int a, b;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        v[a].__emplace_back(b); // v[a]에 b를 넣어준다. a에서 b까지의 간선이 존재한다
        v[b].__emplace_back(a);
    }

    dfs(R);

    for (int i = 1; i <= N; i++)
    {
        cout << cnt[i] << '\n';
    }

    return 0;
}