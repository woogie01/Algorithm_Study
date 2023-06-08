#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> Q;

    for (int i = 1; i <= N; i++)
    {
        Q.push(i);
    }

    cout << "<";
    while (Q.size())
    {
        // K - 1번째 수까지 뒤로 넘기기.
        for (int i = 0; i < K - 1; i++)
        {
            Q.push(Q.front());
            Q.pop();
        }
        // K번째 수 출력 후 삭제.
        cout << Q.front();
        Q.pop();

        if (Q.size())
            cout << ", ";
    }
    cout << ">";
}
