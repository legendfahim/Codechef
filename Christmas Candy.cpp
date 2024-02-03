// Christmas Candy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            a.push_back(c);
        }

        set<int> st;
        int ans = 0;
        for (auto e : a)
        {
            st.insert(e);

            ans += (*st.rbegin() > e);
        }
        cout << ans << "\n";
    }

    return 0;
}

// Christmas Candy---TLE
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> people;
//         vector<bool> arr(n, false);

//         for (int i = 0; i < n; i++)
//         {
//             int num;
//             cin >> num;
//             people.push_back(num);
//         }

//         for (int i = 0; i < people.size() - 1; i++)
//         {
//             for (int j = i + 1; j < people.size(); j++)
//             {
//                 if (people[i] > people[j])
//                 {
//                     arr[people[j] - 1] = true;
//                 }
//             }
//         }

//         int count = 0;
//         for (bool receivedCandy : arr)
//         {
//             if (receivedCandy)
//             {
//                 count++;
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }

// Christmas Candy---TLE
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> people;
//         bool arr[INT_MAX] = {false};
//         for (int i = 0; i < n; i++)
//         {
//             int num;
//             cin >> num;
//             people.push_back(num);
//         }
//         for (int i = 0; i < people.size() - 1; i++)
//         {
//             for (int j = 1; j < people.size(); j++)
//             {
//                 if (people[i] > people[j])
//                 {
//                     arr[people[j]] = true;
//                 }
//             }
//         }
//         int count = 0;
//         for (int i = 0; i < INT_MAX; i++)
//         {
//             if (arr[i])
//             {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
// }