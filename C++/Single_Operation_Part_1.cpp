#include <iostream>
using namespace std;

int main()
{
    int l, T , y ;
    string s;
    cin >> T;

    for (int k = 1; k <= T; k++)
    {

        cin >> l;

        cin >> s;

        y = 0;
    

        for (int j = 0; j < l; j++)
        {
            if (s[j] == '1')
            {
                y++;
                
            }
            else
            {
                break;
            }
        }
        cout << y << endl;

        
    }
    return 0;
}