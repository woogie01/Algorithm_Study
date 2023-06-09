#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> S;

    while (N--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int num;
            cin >> num;
            S.push(num);
        }
        else if (str == "pop")
        {
            if (S.empty())
                cout << -1 << "\n";
            else
            {
                cout << S.top() << "\n";
                S.pop();
            }
        }
        else if (str == "size")
            cout << S.size() << "\n";
        else if (str == "empty")
            cout << (int)S.empty() << "\n";
        else
        {
            // Top()
            if (S.empty())
                cout << -1 << "\n";
            else
                cout << S.top() << "\n";
        }
    }
}