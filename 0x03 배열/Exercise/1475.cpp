#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, temp, set = 0;
    cin >> N;
    temp = N;
    int need[10] = {};
    while (temp)
    {
        need[temp % 10]++;
        temp /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        set = max(set, need[i]);
    }

    // 6 6 1 2 = 1
    // 6 6 9 9 = 2
    // 6 6 9 3 = 2
    set = max(set, (need[6] + need[9] + 1) / 2);
    cout << set;
}
