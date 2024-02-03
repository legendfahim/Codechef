// A - Anton and Letters
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> data;
    char c;
    while (cin >> c)
    {
        if (c >= 'a' && c <= 'z')
        {
            data.insert(c);
        }
    }
    cout << data.size();
}