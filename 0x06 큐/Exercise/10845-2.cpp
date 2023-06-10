#include <iostream>
#include <string>

using namespace std;

// Queue 구현.
const int MX = 1000005;
int dat[MX];

// head는 첫번쨰 원소가 있는 인덱스를 가리킴.
// tail은 다음에 원소가 들어갈 인덱스를 가리킴.
// push : tail 증가
// pop : head 증가
int head = 0;
int tail = 0;
void push(int x)
{
    dat[tail++] = x;
}

void pop()
{
    head++;
}

int front()
{
    return dat[head];
}

int back()
{
    return dat[tail - 1];
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while (N--)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int val;
            cin >> val;
            push(val);
        }
        else if (str == "pop")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << front() << '\n';
                pop();
            }
        }
        else if (str == "size")
        {
            cout << tail - head << '\n';
        }
        else if (str == "empty")
        {
            cout << (tail == head) << '\n';
        }
        else if (str == "front")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
                cout << front() << '\n';
        }
        else
        { // back
            if (tail == head)
                cout << -1 << '\n';
            else
                cout << back() << '\n';
        }
    }
}
