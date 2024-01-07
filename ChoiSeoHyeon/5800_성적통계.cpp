// 백준 : 성적통계, 실버 5
// 문제 : 각 반의 수학 성적이 주어졌을 때,  최대 점수, 최소 점수, 점수 차이를 구하기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // k: 반 수, n: 각 반 학생 수
    int k, n;
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        cin >> n;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        sort(v.begin(), v.end(), greater<int>()); // greater<int>()내림차순

        int maxGap = -1;

        // 마지막 요소는 빼기 위해 v.size() - 1
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (maxGap < v[j] - v[j + 1])
            {
                maxGap = v[j] - v[j + 1];
            }
        }

        cout << "Class " << i << "\n";
        cout << "Max " << v[0] << ", Min " << v[n - 1] << ", Largest gap " << maxGap << "\n";
    }

    return 0;
}