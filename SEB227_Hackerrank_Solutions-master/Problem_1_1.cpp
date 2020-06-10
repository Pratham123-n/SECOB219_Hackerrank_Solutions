#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int res(int n)
{
    int test[] = {100, 20, 10, 5, 1};
    int ans = 0;
    for (int i = 0; i < 5 && n > 0; i++)
    {
        int quo = n / test[i];

        n = n % test[i];
        ans += quo;
    }
    return ans;
}

int main()
{
    int t;
    long n[50];
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> n[i];

    for (int i = 0; i < t; i++)
        cout << res(n[i]) << endl;
    return 0;
}