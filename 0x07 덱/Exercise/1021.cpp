#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    deque<int> DQ;
    for (int i = 1; i <= N; i++)
        DQ.push_back(i);

    int ans = 0;
    while (M--)
    {
        int num;
        cin >> num;

        // idx : num 원소가 있는 위치
        int idx = find(DQ.begin(), DQ.end(), num) - DQ.begin();

        while (DQ.front() != num)
        {
            if (idx < (int)DQ.size() - idx)
            {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else
            {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }
    cout << ans;
}
