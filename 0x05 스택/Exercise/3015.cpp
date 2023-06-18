#include <iostream>
#include <stack>

using namespace std;

#define X first
#define Y second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // <height, cnt>
    stack<pair<int, int>> S;
    long long ans = 0;

    while (N--)
    {
        int height;
        cin >> height;

        int cnt = 1;
        while (!S.empty() && S.top().X <= height)
        {
            ans += S.top().Y;

            if (S.top().X == height)
                cnt += S.top().Y;

            S.pop();
        }
        if (!S.empty())
            ans++;

        S.push({height, cnt});
    }
    cout << ans;
}
