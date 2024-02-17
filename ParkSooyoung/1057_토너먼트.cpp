#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, A, B;
  cin >> N >> A >> B;

  // 다음 라운드에 진출할 때마다 참가자 번호 k는 (k + 1) / 2가 된다.
  int ans = 0;
  while (A != B) {
    A = (A + 1) / 2;
    B = (B + 1) / 2;
    ++ans;
  }

  cout << ans << '\n';
}