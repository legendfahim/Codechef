#include <bits/stdc++.h>
using namespace std;

int digitSum(int x){
    int sum=0;
    while (x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum%2;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n % 10) == 9)
        {
            if (digitSum(n)!=digitSum(n+1))
            {
               cout<<n+1<<endl;
            }else
            {
                cout<<n+2<<endl;
            }
            
            
        }
        else
        {
            cout << n + 1 << endl;
        }
    }
}
