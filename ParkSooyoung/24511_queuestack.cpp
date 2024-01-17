#include <iostream>
#include <deque>
using namespace std;

// isStack[i]: i번 자료구조가 큐라면 0, 스택이라면 1
bool isStack[100000];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, M;
  // push와 pop이 앞뒤로 가능하기 때문에 덱(deque)을 사용한다.
  deque<int> dq;
  cin >> N;
  
  for (int i = 0; i < N; i++) {
    cin >> isStack[i];
  }

  for (int i = 0; i < N; i++) {
    int num;
    cin >> num;

    // i번 자료구조가 스택인 경우에는 num을 덱에 넣지 않는다.
    // queuestack의 흐름 상, 스택 내부의 원소는 초기 상태를 유지하기 때문에 출력에 영향을 주지 않는다.
    if (!isStack[i]) {
      dq.push_back(num);
    }
  }

  cin >> M;

  // queuestack에서 i번 큐는 (i-1)번 원소를 자신에게 대입하고 기존의 i번 원소를 (i+1)번 큐에 입력으로 넣는다.
  // 따라서 여러 개의 큐를 하나의 덱으로 구현하여, 입력을 덱의 앞(front)에 삽입하고 맨 뒤의 값을 출력한다.
  for (int i = 0; i < M; i++) {
    int num;
    cin >> num;

    dq.push_front(num);
    cout << dq.back() << ' ';
    dq.pop_back();
  }
}