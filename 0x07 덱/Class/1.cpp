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

void test()
{
    push_back(30);           // 30
    cout << front() << '\n'; // 30
    cout << back() << '\n';  // 30
    push_front(25);          // 25 30
    push_back(12);           // 25 30 12
    cout << back() << '\n';  // 12
    push_back(62);           // 25 30 12 62
    pop_front();             // 30 12 62
    cout << front() << '\n'; // 30
    pop_front();             // 12 62
    cout << back() << '\n';  // 62
}

int main(void)
{
    test();
}
