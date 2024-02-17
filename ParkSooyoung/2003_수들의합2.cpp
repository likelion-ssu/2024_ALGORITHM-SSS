#include <iostream>
using namespace std;

// sum[i]: 수열의 1번째 수부터 i번째 수까지의 누적합
// sum[0] = 0
int sum[10001];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, M;
  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    int num;
    cin >> num;
    // i번째 수까지의 누적합을 계산한다.
    sum[i] = sum[i - 1] + num;
  }

  int ans = 0;
  int left = 0, right = 1;

  // 수열의 각 수는 1 이상의 값을 가지므로
  // 부분합이 M이 되는 경우의 수는 각 right 값 당 최대 한 개까지만 존재할 수 있다.
  // 따라서 right > N인 경우, 순회를 종료한다.
  while (right <= N) {
    // partialSum: 수열의 (left+1)번째 수부터 (right)번째 수까지의 부분합
    int partialSum = sum[right] - sum[left];

    if (partialSum < M) { // 부분합이 M보다 작은 경우, 부분합을 증가시킨다.
      right++;
    }
    else if (partialSum > M) {  // 부분합이 M보다 큰 경우, 부분합을 감소시킨다.
      left++;
    }
    else {
      ans++;
      right++;
    }
  }

  cout << ans << '\n';
}