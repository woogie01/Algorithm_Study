#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[21];
    int b[21][21];

    // 전체를 특정값으로 초기화 시키는 방법

    // 1. for
    for (int i = 0; i < 21; i++)
        a[i] = 0;
    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
            b[i][j] = 0;
    }

    // 2. fill
    // algorithm 헤더의 fill 함수를 이용
    std::fill(a, a + 21, 0);
    for (int i = 0; i < 21; i++)
        std::fill(b[i], b[i] + 21, 0);
}