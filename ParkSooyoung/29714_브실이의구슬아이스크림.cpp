#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// beads: 현재 아이스크림에서 구슬의 <색상, 개수> 쌍
unordered_map<int,int> beads;

// beadsToEat: 떠먹으려고 하는 구슬의 <색상, 개수> 쌍
unordered_map<int,int> beadsToEat;

// beadsToPour: 아이스크림에 부으려는 구슬의 색상
int beadsToPour[200000];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int N, Q;

  cin >> N;

  // 초기 아이스크림의 구슬을 입력받는다.
  for (int i = 0; i < N; i++) {
    int color;
    cin >> color;
    beads[color]++;
  }
  
  cin >> Q;
  while (Q--) {
    int a, b;
    // hasAllBeads: 떠먹으려는 구슬이 현재 아이스크림에 모두 존재하는지 여부
    bool hasAllBeads = true;

    beadsToEat.clear();

    cin >> a;
    for (int i = 0; i < a; i++) {
      int color;
      cin >> color;
      beadsToEat[color]++;
    }
    cin >> b;
    for (int i = 0; i < b; i++) {
      cin >> beadsToPour[i];
    }
    
    // 떠먹으려는 각각의 구슬의 색상(beadToEat.first)별로, 개수(beadToEat.second)가 충분한지 확인한다.
    for (auto beadToEat : beadsToEat) {
      // 해당 색상의 구슬이 부족한 경우 탐색 종료
      if (beads[beadToEat.first] < beadToEat.second) {
        hasAllBeads = false;
        break;
      }
    }

    // 아이스크림에 없는 구슬이 적어도 하나 있다면 아무것도 하지 않는다.
    if (!hasAllBeads) {
      continue;
    }

    // 아이스크림에 먹으려는 구슬이 모두 있으면 구슬들을 먹어치운다.
    for (auto beadToEat : beadsToEat) {
      beads[beadToEat.first] -= beadToEat.second;
    }

    for (int i = 0; i < b; i++) {
      beads[beadsToPour[i]]++;
    }
  }

  vector<int> ans;
  for (auto bead : beads) {
    for (int i = 0; i < bead.second; i++) {
      ans.push_back(bead.first);
    }
  }

  cout << ans.size() << '\n';
  for (auto a : ans)
    cout << a << ' ';
}