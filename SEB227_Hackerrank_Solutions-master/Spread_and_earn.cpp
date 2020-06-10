#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], cost = 0, v[n] = {0}, n1, n2;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < k; i++)
    {
        cin >> n1 >> n2;
        if (v[n1 - 1] == 0 && v[n2 - 1] == 0)
        {
            if (a[n1 - 1] > a[n2 - 1])
            {
                cost += a[n2 - 1];
            }
            else
            {
                cost += a[n1 - 1];
            }
            v[n1 - 1] = 1;
            v[n2 - 1] = 1;
        }
        else
        {
            if (v[n2 - 1] == 0 && v[n1 - 1] == 1)
                v[n2 - 1] = 1;
            else
                v[n1 - 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            cost += a[i];
        }
    }
    cout << cost;
    return 0;
}