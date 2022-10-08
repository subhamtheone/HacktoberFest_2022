/*
Name : Rounak Ghosh
Username : Rounak-Ghosh
About : 4th year undergrad student at GCETTB
*/

#include<iostream>
using namespace std;

void tower(int n, char source, char helper, char destination)
{
    if(n==1)
    {
        cout << "Move from " << source << " to " << destination << endl;
        return;
    }
    tower(n-1, source, destination, helper);
    cout << "Move from " << source << " to " << destination << endl;
    tower(n-1, helper, source, destination);
}

int main()
{
    int n;
    cin >> n;
    tower(n, 'A', 'B', 'C');
    return 0;
}