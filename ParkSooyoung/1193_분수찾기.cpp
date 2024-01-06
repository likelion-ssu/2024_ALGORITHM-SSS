#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int X;
  cin >> X;

  // sum: 1부터 n까지의 합 중 X보다 작은 가장 큰 수
  int sum = 0, i = 1;
  while (sum + i < X) {
    sum += i++;
  }

  // numerator: 분자
  int numerator = X - sum;
  if (i % 2) {
    numerator = i + 1 - numerator;
  }

  // denomiator: 분모
  int denominator = i + 1 - numerator;

  cout << numerator << "/" << denominator << '\n';
}