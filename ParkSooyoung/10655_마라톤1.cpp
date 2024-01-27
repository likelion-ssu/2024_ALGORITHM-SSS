#include <iostream>
using namespace std;

int x[100000], y[100000];
int dist[100000];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N;
  int sum = 0;
  cin >> N >> x[0] >> y[0];
  for (int i = 1; i < N; i++) {
    cin >> x[i] >> y[i];
    dist[i] = abs(x[i - 1] - x[i]) + abs(y[i - 1] - y[i]);
    sum += dist[i];
  }

  int ans = 987654321;
  for (int i = 1; i < N - 1; i++) {
    int tmp = sum - dist[i] - dist[i + 1] + abs(x[i - 1] - x[i + 1]) + abs(y[i - 1] - y[i + 1]);
    ans = min(ans, tmp);
  }

  cout << ans << '\n';
}