// Largest and Second Largest
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        vector<int> arr1;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            arr.push_back(c);
        }
        auto it1 = max_element(arr.begin(), arr.end());

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == *it1)
            {
                continue;
            }

            arr1.push_back(arr[j]);
        }
        auto it2 = max_element(arr1.begin(), arr1.end());

        cout << *it1 + *it2 << endl;
    }
}