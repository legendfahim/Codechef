
// VAL142
#include <iostream>
using namespace std;

// Function to check if Chef can plan a series of gifts
string canPlanGifts(int budget)
{
    int currentGiftValue = 1;
    for (int i = 0; i < 7; i++)
    {
        if (budget >= currentGiftValue)
        {
            budget -= currentGiftValue;
            currentGiftValue *= 2;
        }
        else
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    int T;
    cin >> T; // Number of test cases
    while (T--)
    {
        int X;
        cin >> X; // Budget for the test case
        cout << canPlanGifts(X) << endl;
    }
    return 0;
}
