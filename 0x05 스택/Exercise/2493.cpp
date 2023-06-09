#include <iostream>
#include <stack>

using namespace std;

#define X first
#define Y second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<index, height>
    stack<pair<int, int>> tower;
    int N, height;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> height;

        // 왼쪽에서 오른쪽으로 탐색.
        while (!tower.empty())
        {
            // 수신탑을 발견한 경우.
            if (height < tower.top().Y)
            {
                cout << tower.top().X << " ";
                break;
            }

            // 높이가 낮은 타워는 높은 타워에 막힘으로 삭제해도 무방.
            tower.pop();
        }
        // 수신탑이 없는 경우.
        if (tower.empty())
            cout << 0 << " ";

        tower.push(make_pair(i + 1, height));
    }

    return 0;
}
