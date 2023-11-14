// Enormous Input Test

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, result = 0;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] % K == 0)
        {
            result++;
        }
    }

    cout << result;
}