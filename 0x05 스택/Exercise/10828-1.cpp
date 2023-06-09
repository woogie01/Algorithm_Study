#include <iostream>

using namespace std;

const int MX = 1000005;
int dat[MX];

// 다음에 원소가 삽입되어야 할 곳을 가리킴.
int pos = 0;

void push(int x)
{
    dat[pos++] = x;
}

void pop()
{
    cout << dat[pos - 1];
    pos--;
}

int size()
{
    // pos 값 = size 값
    return pos;
}

void empty()
{
    if (pos == 0)
        cout << 1;
    else
        cout << 0;
}

int top()
{
    return dat[pos - 1];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while (N--)
    { // n번 반복
        string str;
        cin >> str;
        if (str == "push")
        {
            int t;
            cin >> t;
            push(t);
        }
        else if (str == "pop")
        {
            if (pos == 0)
                cout << -1 << '\n';
            else
            {
                cout << top() << '\n';
                pop();
            }
        }
        else if (str == "size")
            cout << pos << '\n';
        else if (str == "empty")
            cout << (int)(pos == 0) << '\n';
        else
        { // top
            if (pos == 0)
                cout << -1 << '\n';
            else
                cout << top() << '\n';
        }
    }
}
