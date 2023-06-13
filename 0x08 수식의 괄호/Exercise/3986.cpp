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

    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        stack<char> S;

        string str;
        cin >> str;

        for (auto ch : str)
        {
            if (S.empty() || S.top() != ch)
                S.push(ch);
            else
                S.pop();
        }
        if (S.empty())
            answer++;
    }
    cout << answer << "\n";
}
