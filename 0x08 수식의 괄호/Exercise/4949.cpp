#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string str;
        getline(cin, str);

        if (str == ".")
            break;

        stack<char> S;
        bool isValid = true;
        for (auto ch : str)
        {
            // 여는 괄호가 나오면 스택에 추가.
            if (ch == '(' || ch == '[')
                S.push(ch);
            else if (ch == ')')
            {
                // 스택이 비어있으면 올바르지 않은 괄호 쌍
                // 스택의 top이 짝이 맞지 않는 괄호일 경우 올바르지 않은 괄호 쌍
                if (S.empty() || S.top() != '(')
                {
                    isValid = false;
                    break;
                }
                S.pop();
            }
            else if (ch == ']')
            {
                // 스택이 비어있으면 올바르지 않은 괄호 쌍
                // 스택의 top이 짝이 맞지 않는 괄호일 경우 올바르지 않은 괄호 쌍
                if (S.empty() || S.top() != '[')
                {
                    isValid = false;
                    break;
                }
                S.pop();
            }
        }

        // 모든 과정을 끝낸 후 스택에 괄호가 남아있으면 올바르지 않은 괄호 쌍, 남아있지 않으면 올바른 괄호쌍
        if (!S.empty())
            isValid = false;

        if (isValid)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
