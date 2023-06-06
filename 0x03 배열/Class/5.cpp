#include <iostream>
#include <algorithm>

using namespace std;

// 배열의 크기와 원소들을 받은 후 두 합이 100이면 1을 리턴하는 함수
// 이중 for문을 쓰지 않고 O[N]에 문제를 해결.
int func2(int arr[], int N)
{
    // 이전에 등장한 숫자인지를 나타낼 배열.
    // fill(occur, occur + 101, 0);
    int occur[101] = {};
    for (int i = 0; i < N; i++)
    {
        // 이전에 합이 나타난 수가 있는지 확인.
        if (occur[100 - arr[i]] == 1)
            return 1;

        // 등장 표시하기.
        occur[arr[i]] = 1;
    }
    return 0;
}