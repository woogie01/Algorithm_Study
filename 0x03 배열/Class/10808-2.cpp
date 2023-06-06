#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    for (char A = 'a'; A <= 'z'; A++)
    {
        int cnt = 0;
        for (auto B : str)
        {
            if (A == B)
                cnt++;
        }
        cout << cnt << " ";
    }
}