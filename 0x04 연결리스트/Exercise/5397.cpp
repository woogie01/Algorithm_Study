#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string temp;
        cin >> temp;

        list<char> L;
        auto cursor = L.begin();

        for (auto C : temp)
        {
            if (C == '<')
            {
                // 커서 왼쪽으로 이동
                if (cursor != L.begin())
                    cursor--;
            }
            else if (C == '>')
            {
                // 커서 오른쪽으로 이동
                if (cursor != L.end())
                    cursor++;
            }
            else if (C == '-')
            {
                // 백스페이스
                if (cursor != L.begin())
                {
                    cursor--;
                    // cursor가 가리키는 값을 제거, 그 다음 원소의 위치를 반환
                    cursor = L.erase(cursor);
                }
            }
            else
            {
                // 나머지 문자
                // cursor가 가리키는 곳 앞에 문자를 삽입.
                L.insert(cursor, C);
            }
        }
        for (auto ch : L)
            cout << ch;

        cout << "\n";
    }

    return 0;
}
