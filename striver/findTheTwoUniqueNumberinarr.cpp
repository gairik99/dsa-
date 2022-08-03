#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    int vor = 0;
    for (int i = 0; i < n; i++)
        vor = vor ^ vec[i];
    int cnt = 0;
    while (vor)
    {
        if (vor & 1)
            break;
        cnt++;
        vor = vor >> 1;
    }
    int vor1 = 0, vor2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] & (1 << cnt))
            vor1 = vec[i] ^ vor1;
        else
            vor2 = vec[i] ^ vor2;
    }
    cout << vor1 << "  " << vor2;
}