#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> DQ;
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        cin >> str;
        if (str == "push_back")
        {
            int val;
            cin >> val;
            DQ.push_back(val);
        }
        else if (str == "push_front")
        {
            int val;
            cin >> val;
            DQ.push_front(val);
        }
        else if (str == "pop_front")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
            {
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
            {
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if (str == "size")
            cout << DQ.size() << '\n';
        else if (str == "empty")
            cout << DQ.empty() << '\n';
        else if (str == "front")
        {
            if (DQ.empty())
                cout << -1 << '\n';
            else
                cout << DQ.front() << '\n';
        }
        else
        { // back
            if (DQ.empty())
                cout << -1 << '\n';
            else
                cout << DQ.back() << '\n';
        }
    }
}
