#include <iostream>

using namespace std;

// 정석 : 원소가 생성될 때 동적할당하는 방식.
struct Node
{
    struct Node *prev, *next;
    int data;
};
