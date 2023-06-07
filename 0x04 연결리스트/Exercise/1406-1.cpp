#include <iostream>
#include <list>
#include <string>

using namespace std;

// **iterator**
// end() : 마지막 요소가 아닌 마지막 요소의 다음을 가리킴.
// begin() : 첫번쨰 요소를 가리킴

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    // 연결 리스트 생성 후 초기화.
    list<char> L;
    for (auto C : str)
    {
        L.push_back(C);
    }

    // 커서는 문장의 맨 뒤에 위치.
    auto cursor = L.end();

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        char command;
        cin >> command;

        if (command == 'P')
        {
            char plusChar;
            cin >> plusChar;

            L.insert(cursor, plusChar);
        }
        else if (command == 'L')
        {
            if (cursor != L.begin())
                cursor--;
        }
        else if (command == 'D')
        {
            if (cursor != L.end())
                cursor++;
        }
        else
        {
            if (cursor != L.begin())
            {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }
    for (auto C : L)
        cout << C;
}
