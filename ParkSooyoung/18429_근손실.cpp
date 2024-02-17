#include <iostream>
using namespace std;

int N, K;

// weightIncrement[i] = (i)번 운동 키트의 중량 증가량
int weightIncrement[8];

// isUsed[i] = (i)번 운동 키트의 사용 여부
bool isUsed[8];

// (days)일차에 중량이 (weight)일 때
// 남은 운동 기간동안 중량이 500 이상이 되는 경우의 수를 반환하는 메서드이다.
int countOver500(int days, int weight)
{
  // 운동을 모두 마치면 경우의 수를 증가한다.
  if (days == N) {
    return 1;
  }

  int ret = 0;
  for (int i = 0; i < N; i++) {
    // (i)번 운동 키트를 사용한 적이 없고, 사용 후 중량이 500 이상이라면 사용한다.
    if (!isUsed[i]) {
      // nextWeight = (i)번 운동 키트를 사용했을 때의 중량
      int nextWeight = weight - K + weightIncrement[i];
      if (nextWeight < 500) {
        continue;
      }

      isUsed[i] = true;
      ret += countOver500(days + 1, nextWeight);
      isUsed[i] = false;
    }
  }

  return ret;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> weightIncrement[i];
  }

  cout << countOver500(0, 500) << '\n';
}