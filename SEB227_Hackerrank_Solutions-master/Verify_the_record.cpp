#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::vector<int> vec;
    std::vector<int> waiting;

    std::vector<int>::iterator it;

    int n;
    int ser;

    vec.push_back(1);
    vec.push_back(2);
    waiting.push_back(3);

    cin >> n;

    while (n--)
    {
        cin >> ser;

        it = std::find(vec.begin(), vec.end(), ser);
        if (it != vec.end())
        {
            if (it - vec.begin() == 0)
            {
                int temp = vec.back();
                vec.pop_back();
                vec.push_back(waiting[0]);
                waiting.pop_back();
                waiting.push_back(temp);
            }
            else
            {
                int temp = vec[0];
                vec[0] = waiting[0];
                waiting.pop_back();
                waiting.push_back(temp);
            }
            continue;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}