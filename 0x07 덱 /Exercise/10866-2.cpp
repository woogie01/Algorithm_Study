#include <iostream>

using namespace std;

// 덱(deque)
// Double Ended Queue
// 양쪽에서 삽입과 삭제가 가능.
const int MX = 1000005;
int dat[2 * MX + 1];

// 초기 시작과 끝 지점을 배열의 중간으로 설정.
// 양쪽으로 점점 확장
// head는 첫번쨰 원소가 있는 인덱스를 가리킴.
// tail은 다음에 원소가 들어갈 인덱스를 가리킴.
int head = MX;
int tail = MX;

void push_front(int x)
{
    dat[--head] = x;
}

void push_back(int x)
{
    dat[tail++] = x;
}

void pop_front()
{
    head++;
}

void pop_back()
{
    tail--;
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
            push_back(val);
        }
        else if (str == "push_front")
        {
            int val;
            cin >> val;
            push_front(val);
        }
        else if (str == "pop_front")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << front() << '\n';
                pop_front();
            }
        }
        else if (str == "pop_back")
        {
            if (tail == head)
                cout << -1 << '\n';
            else
            {
                cout << back() << '\n';
                pop_back();
            }
        }
        else if (str == "size")
            cout << tail - head << '\n';
        else if (str == "empty")
            cout << (tail == head) << '\n';
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
