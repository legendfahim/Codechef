// Id and Ship
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if (c == 'b' || c == 'B')
        {
            cout << "BattleShip" << endl;
        }
        else if (c == 'c' || c == 'C')
        {
            cout << "Cruiser" << endl;
        }
        else if (c == 'd' || c == 'D')
        {
            cout << "Destroyer" << endl;
        }
        else
        {
            cout << "Frigate" << endl;
        }
    }
}