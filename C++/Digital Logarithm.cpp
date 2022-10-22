#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        map<int, int> mpa;
        map<int, int> mpb;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mpa[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mpb[b[i]]++;
        }
        int x;
        for (int i = 0; i < n; i++)
        {
            if (mpb[a[i]] != 0)
            {
                x = min(mpb[a[i]], mpa[a[i]]);
                mpb[a[i]] -= x;
                mpa[a[i]] -= x;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 10 && mpa[a[i]] != 0)
            {
                c += mpa[a[i]];
                mpa[floor(log10(a[i])) + 1] += mpa[a[i]];
                mpa[a[i]] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mpb[b[i]] != 0 && b[i] >= 10)
            {
                c += mpb[b[i]];
                mpb[floor(log10(b[i])) + 1] += mpb[b[i]];
                mpb[b[i]] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mpb[a[i]] != 0)
            {
                x = min(mpb[a[i]], mpa[a[i]]);
                mpb[a[i]] -= x;
                mpa[a[i]] -= x;
            }
        }
        for (int i = 2; i < 10; i++)
        {
            // cout<<i<<" "<<mpa[i]<<" "<<mpb[i]<<" ";
            c += abs(mpa[i] - mpb[i]);
        }
        cout << c << "\n";
    }
}