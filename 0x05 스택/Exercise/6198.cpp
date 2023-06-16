#include <iostream>
#include <stack>

using namespace std;

stack<int> tower;
int N;
long long ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    long long height;
    while (N--)
    {
        cin >> height;
        while (!tower.empty() && tower.top() <= height)
            tower.pop();
        ans += tower.size();
        tower.push(height);
    }
    cout << ans;
    return 0;
}
