#include <bits/stdc++.h>
using namespace std;

int maxn = 1e5;

void primes(bool arr[], int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= n; j += i)
                arr[j] = false;
        }
        if (i * i >= n)
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    bool isprime[maxn];
    for (int i = 2; i <= n; i++)
        isprime[i] = 1;

    isprime[1] = 0;
    primes(isprime, n);
    for (int i = 1; i <= n; i++)
    {
        if (isprime[i])
            cout << " " << i;
    }
}