#include <iostream>
#include <algorithm>

using namespace std;

int num[21];

// 카드를 역순으로 놓는 함수
void reverse(int a, int b)
{
    for (int i = 0; i < (b - a + 1) / 2; i++)
        swap(num[a + i], num[b - i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 20; i++)
        num[i] = i;

    for (int i = 1; i <= 10; i++)
    {
        int a, b;
        cin >> a >> b;
        reverse(a, b);
    }

    for (int i = 1; i <= 20; i++)
        cout << num[i] << ' ';
}
