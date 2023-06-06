#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int freq[26];
    fill(freq, freq + 26, 0);
    for (auto c : str)
        freq[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        cout << freq[i] << " ";
    }
}