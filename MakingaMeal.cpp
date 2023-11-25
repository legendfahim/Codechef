// Making a Meal

#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[25] = {0};
        while (n--)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                arr[(s[i] - 'a' + 1) - 1]++;
            }
        }
        int count = 0;
        while (1)
        {
            if (arr[2] >= 2 && arr[3] >= 1 && arr[4] >= 2 && arr[5] >= 1 && arr[7] >= 1 && arr[14] >= 1)
            {
                count++;
                arr[2] -= 2;
                arr[3] -= 1;
                arr[4] -= 2;
                arr[5] -= 1;
                arr[7] -= 1;
                arr[14] -= 1;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }
}
