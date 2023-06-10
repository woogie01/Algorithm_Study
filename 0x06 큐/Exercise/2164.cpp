#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> Q;
    for (int i = 1; i <= N; i++)
    {
        Q.push(i);
    }

    while (Q.size() != 1)
    {
        Q.pop();

        int temp = Q.front();
        Q.push(temp);

        Q.pop();
    }

    cout << Q.front();
}
