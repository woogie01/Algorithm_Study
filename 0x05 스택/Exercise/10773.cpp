#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int K;
    cin >> K;

    stack<int> S;
    for (int i = 0; i < K; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 0)
        {
            if (!S.empty())
            {
                S.pop();
            }
        }
        else
        {
            S.push(temp);
        }
    }

    int sum = 0;
    while (!S.empty())
    {
        int temp = S.top();
        sum += temp;
        S.pop();
    }

    cout << sum;

    return 0;
}
