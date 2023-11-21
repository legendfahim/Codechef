// Forgotten Language

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input test case number
    int t;
    cin >> t;
    while (t--)
    {
        // input important datas
        int n, l, k;
        cin >> n >> k;
        // build dictionary
        vector<string> dictionary;
        vector<string> kWords;
        while (n--)
        {
            // imput dictionary words
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        // build known words libary
        while (k--)
        {
            cin >> l;
            while (l--)
            {
                // input known words
                string s;
                cin >> s;
                kWords.push_back(s);
            }
        }
        // print result
        for (int i = 0; i < dictionary.size(); i++)
        {
            auto it = find(kWords.begin(), kWords.end(), dictionary[i]);
            if (it != kWords.end())
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
            if (i != dictionary.size() - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}