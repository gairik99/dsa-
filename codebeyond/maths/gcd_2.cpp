#include <bits/stdc++.h>
using namespace std;

int gcd2(int a, int b)
{
    if (b == 0)
        return a;

    return gcd2(b, a % b);
}

int gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = 0, y = 0;
    cout << gcd(a, b, x, y) << endl;
    cout << x << y;
}