#include <iostream>
#include <stack>
#include <string>

typedef long long LL;

using namespace std;

string str;
LL ans = 0;
stack<char> S;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    int size = str.length();

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '(')
            S.push(str[i]);
        else if (str[i] == ')')
        {
            if (str[i - 1] == '(')
            {                    // 레이저일 경우
                                 // 막대의 개수만큼 추가.
                S.pop();         // 앞에서 막대라고 착각하고 stack에 s[i]를 넣었으므로 pop
                ans += S.size(); // 막대의 개수만큼 ans에 추가
            }
            else if (str[i - 1] == ')')
            {            // 막대의 끝일 경우
                S.pop(); // 막대의 개수를 1 감소
                ans++;   // 막대 1개가 절단된 것과 동일한 상황이므로 ans에 1 추가
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
