#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X, result = 0;
    cin >> N;
    int arr[N];
    int occur[2000001] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> X;

    for (int i = 0; i < N; i++)
    {
        if (X - arr[i] > 0 && occur[X - arr[i]])
            result++;

        occur[arr[i]] = 1;
    }
    cout << result;
}