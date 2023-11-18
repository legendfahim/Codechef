// No Time to Wait
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input all data to complete the task
    int n, h, x;
    cin >> n >> h >> x;
    // array for all times
    vector<int> times;
    // loop for input all times
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        // push data to array
        times.push_back(c);
    }
    if (h <= x)
    {
        cout << "YES" << endl;
    }
    else
    {

        // find max element from vector array
        auto it = max_element(times.begin(), times.end()); // iterator
        if (x + *it >= h)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
