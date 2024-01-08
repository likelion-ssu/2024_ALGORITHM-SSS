#include <iostream>
#include <stack>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int K;
  stack<int> stk;

  cin >> K;
  for (int i = 0; i < K; i++) {
    int num;
    cin >> num;
    if (num == 0) // 0인 경우 가장 최근에 쓴 수를 지운다.
      stk.pop();
    else          // 아닐 경우 입력받은 수를 쓴다.
      stk.push(num);
  }

  // 최종적으로 적어낸 수의 합을 출력한다.
  int ans = 0;
  while (!stk.empty()) {
    ans += stk.top();
    stk.pop();
  }

  cout << ans << '\n';
}