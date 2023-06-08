#include <iostream>
#include <vector>

using namespace std;

// 리스트 구현을 위한 이전, 다음 노드를 가리키는 배열.
// 리스트의 인덱스 값을 그대로 값으로 이용하기에 dat[5001]은 사용하지 않음.
int pre[5001];
int nxt[5001];

// 요세푸스 순열 저장 배열.
vector<int> answer;

// 리스트의 길이.
int len = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    // 원형 리스트 구현
    for (int i = 1; i <= N; i++)
    {
        // 마지막 노드일 경우, 첫번째 노드를 가리킴.
        nxt[i] = (i == N) ? 1 : i + 1;
        // 첫번째 노드일 경우, 마지막 노드를 가리킴.
        pre[i] = (i == 1) ? N : i - 1;
        len++;
    }

    // 요세푸스 순열 생성
    int i = 1;
    for (int cur = 1; len != 0; cur = nxt[cur])
    {
        // K번째마다 삭제.
        if (i == K)
        {
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            answer.push_back(cur);
            i = 1;
            len--;
        }
        else
        {
            i++;
        }
    }

    // 요세푸스 순열 출력
    cout << "<";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i];

        if (i != answer.size() - 1)
            cout << ", ";
    }
    cout << ">";
}
