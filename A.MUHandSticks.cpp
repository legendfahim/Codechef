
// A. MUH and Sticks
// not coded by Istiak
#include <iostream>
using namespace std;
long long int main()
{
    long long int a[10] = {0};
    for (long long int i = 1; i <= 6; i++)
    {
        long long int x;
        cin >> x;
        a[x]++;
    }

    long long int leg = 0;
    long long int leg_value = 0;
    for (long long int i = 1; i <= 9; i++)
    {
        if (a[i] >= 4)
        {
            leg = 1;
            leg_value = i;
            a[i] = a[i] - 4;
            break;
        }
    }

    long long int body = 0;
    long long int body_value = 0;

    for (long long int i = 1; i <= 9; i++)
    {
        if (a[i] >= 1)
        {
            body = 1;
            body_value = i;
            a[i] = a[i] - 1;
            break;
        }
    }

    long long int head = 0;
    long long int head_value = 0;

    for (long long int i = 1; i <= 9; i++)
    {
        if (a[i] >= 1)
        {
            head = 1;
            head_value = i;
            a[i] = a[i] - 1;
            break;
        }
    }

    // we got leg leg_value / body body_value / head head_value

    if (leg == 1 && body == 1 && head == 1)
    {
        if (leg_value != head_value && leg_value != body_value && head_value != body_value)
            cout << "Bear" << endl;
        else if (body_value != head_value && (leg_value != head_value || leg_value != body_value))
            cout << "Bear" << endl;
        else if (leg_value != head_value && leg_value != body_value && head_value == body_value)
            cout << "Elephant" << endl;
        else if (leg_value == head_value && leg_value == body_value && head_value == body_value)
            cout << "Elephant" << endl;
    }
    else
        cout << "Alien" << endl;
}