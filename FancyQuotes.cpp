// Fancy Quotes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // To clear the newline character from the buffer
    while (t--)
    {
        string s;
        getline(cin, s);

        istringstream iss(s);
        string word;
        bool result = false;

        while (iss >> word)
        {
            if (word == "not")
            {
                result = true;
                break;
            }
        }

        if (result)
        {
            cout << "Real Fancy" << endl;
        }
        else
        {
            cout << "regularly fancy" << endl;
        }
    }

    return 0;
}
