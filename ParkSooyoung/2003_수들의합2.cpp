#include <iostream>
using namespace std;

int partialSum[10001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, M;
  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    int num;
    cin >> num;
    partialSum[i] = partialSum[i - 1] + num;
  }

  int ans = 0;
  int left = 0, right = 1;

  while (right <= N) {
    int sum = partialSum[right] - partialSum[left];
    if (sum < M) {
      right++;
    }
    else if (sum > M) {
      left++;
    }
    else {
      ans++;
      right++;
    }
  }

  cout << ans << '\n';
}