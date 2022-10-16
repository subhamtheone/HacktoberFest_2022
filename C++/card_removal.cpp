#include <iostream>
using namespace std;

int maxi(int arr[], int n)
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (m < count)
        {
            m = count;
        }
    }
    return m;
}
int main()
{
    int arr[100];
    // your code goes here
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int arr[100];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

           
            
        
        }
            int ma = maxi(arr, n);
            cout << (n - ma) << endl;
    }
        return 0;
    }
