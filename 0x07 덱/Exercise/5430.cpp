#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

void parse(string &element, deque<int> &DQ)
{
    // string의 char에서 int로 변환하는 과정이 필요.
    int cur = 0;
    for (int i = 1; i + 1 < element.size(); i++)
    {
        if (element[i] == ',')
        {
            DQ.push_back(cur);
            cur = 0;
        }
        else
        {
            cur = 10 * cur + (element[i] - '0');
        }
    }

    // 마지막 문자 넣기.
    if (cur != 0)
        DQ.push_back(cur);
}

void print_result(deque<int> &DQ)
{
    cout << '[';
    for (int i = 0; i < DQ.size(); i++)
    {
        cout << DQ[i];
        if (i + 1 != DQ.size())
            cout << ',';
    }
    cout << "]\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        deque<int> DQ;
        int N;
        bool isWrong = false;
        string func, element;
        cin >> func;
        cin >> N;
        cin >> element;

        // 덱에 원소 집어넣기.
        parse(element, DQ);

        // 시간초과 방지를 위해 reverse를 마지막에 한번 시행.
        // 앞에 reverse가 존재하는 경우 반대쪽을 삭제.
        int rev = 0;
        for (char c : func)
        {
            if (c == 'R')
                rev = 1 - rev;
            else
            {
                if (DQ.empty())
                {
                    isWrong = true;
                    break;
                }
                if (!rev)
                    DQ.pop_front();
                else
                    DQ.pop_back();
            }
        }

        if (isWrong)
            cout << "error\n";
        else
        {
            // 뒤집기 : 'R'
            if (rev)
                reverse(DQ.begin(), DQ.end());

            // 결과 출력.
            print_result(DQ);
        }
    }
}
