// Chef and Eid

// this solution is 30% good not perfect because it will give some TLE
// #include <bits/stdc++.h>
// using namespace std;

// #define FastIO               \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         multiset<int> numbers;
//         multiset<int> minNum;
//         for (int j = 0; j < n; j++)
//         {
//             int c;
//             cin >> c;
//             numbers.insert(c);
//         }

//         // regular checkpoint
//         for (int i = n - 1; i >= 1; i--)
//         {
//             // get last element
//             auto ithElement = numbers.begin();
//             advance(ithElement, i);

//             // get last previous element
//             auto ithElement2 = numbers.begin();
//             advance(ithElement2, i - 1);
//             // insert to the minNum multiset after Subtraction
//             minNum.insert(*ithElement - *ithElement2);
//         }
//         // print min Number
//         auto min = minNum.begin();
//         cout << *min << endl;
//     }

//     return 0;
// }
// this is perfect solution of the problem
#include <bits/stdc++.h>
using namespace std;

#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> numbers;
        vector<int> minNum;

        for (int j = 0; j < n; j++)
        {
            int c;
            cin >> c;
            numbers.push_back(c);
        }

        // sort the vector
        sort(numbers.begin(), numbers.end());

        // regular checkpoint
        for (int i = n - 1; i >= 1; i--)
        {
            // calculate difference and insert to the minNum vector
            minNum.push_back(numbers[i] - numbers[i - 1]);
        }

        // sort the minNum vector
        sort(minNum.begin(), minNum.end());

        // print min Number
        cout << minNum[0] << endl;
    }

    return 0;
}
