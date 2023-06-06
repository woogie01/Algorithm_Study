#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    int num = A * B * C;
    int arr[10] = {};

    while (num)
    {
        arr[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\n";
}