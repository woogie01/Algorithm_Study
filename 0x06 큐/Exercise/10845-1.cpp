#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int val;
            cin >> val;
            Q.push(val);
        }
        else if (str == "pop")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }
        }
        else if (str == "size")
        {
            cout << Q.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << Q.empty() << '\n';
        }
        else if (str == "front")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.front() << '\n';
        }
        else
        { // back
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.back() << '\n';
        }
    }
}
