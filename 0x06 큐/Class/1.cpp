#include <iostream>

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

void test()
{
    push(10);
    push(20);
    push(30);
    cout << front() << '\n'; // 10
    cout << back() << '\n';  // 30
    pop();
    pop();
    push(15);
    push(25);
    cout << front() << '\n'; // 30
    cout << back() << '\n';  // 25
}

int main(void)
{
    test();
}
