#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    // ranged-based for loop (since C++11)
    for (int e : v1)
        cout << e << " ";

    // refernce ranged-based loop
    // 반목문에서의 작업이 v1에도 영향을 줌.
    for (int &e : v1)
        cout << e << " ";

    // **WRONG**
    // size() 메소드의 반환값은 unsigned int 또는 unsigned long long
    // v1이 빈 벡터인 경우 unsigned int 0에서 int 1을 뺴는 식이 되고
    // unsinged int overflow 발생.
    for (int i = 0; i <= v1.size() - 1; i++)
    {
        cout << v1[i] << " ";
    }
}