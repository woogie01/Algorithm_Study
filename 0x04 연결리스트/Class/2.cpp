#include <iostream>
#include <algorithm>

using namespace std;

// 야매로 구현하는 연결 리스트.
const int MX = 1000005;

// 이전 혹은 다음 원소의 포인터 대신에 배열 상의 인덱스를 저장.
int dat[MX], pre[MX], nxt[MX];

// 현재 사용되지 않는 인덱스, 새로운 원소가 들어갈 수 있는 인덱스.
// 원소가 들어간 이후에 1씩 추가.
// 0번째 인덱스는 헤더노드로 사용하지 않는 Dummy Node를 가리킴.
int unused = 1;

// 연결 리스트의 모든 원소들을 출력.
void traverse()
{
    // 헤더노드가 가리키는 다음 노드가 첫번째 노드.
    int cur = nxt[0];

    while (cur != -1)
    {
        cout << dat[cur] << " ";
        cur = nxt[cur];
    }
}

void insert(int addr, int num)
{
    // 1. 새로운 원소를 생성
    dat[unused] = num;
    // 2. 새 원소의 pre 값에 삽입할 위치의 주소를 대입.
    pre[unused] = addr;
    // 3. 새 원소의 nxt 값에 삽입할 위치의 nxt 값을 대입.
    nxt[unused] = nxt[addr];
    // 4. 삽입할 위치의 nxt 값을 새 원소로 지정
    nxt[addr] = unused;
    // 5. 삽입할 위치의 다음 원소의 pre 값을 새 원소로 변경.
    // 삽입 위치가 마지막인지 확인 후 처리.
    if (nxt[addr] != -1)
        pre[nxt[addr]] = unused;
    // 6. unused 1 증가.
    unused++;
}

// 제거된 원소가 프로그램이 종료될 때까지 메모리를 점유하고 있음.
void erase(int addr)
{
    // 1. 이전 위치의 nxt 값을 삭제할 위치의 nxt 값으로 변경.
    nxt[pre[addr]] = nxt[addr];
    // 2. 다음 위치의 pre 값을 삭제할 위치의 pre 값으로 변경.
    // 삭제 위치가 마지막 위치인지 확인 후 처리.
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void insert_test()
{
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test()
{
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main()
{
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
}
