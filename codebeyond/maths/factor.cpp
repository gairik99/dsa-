#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5;

void factor(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            arr[j]++;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[maxn] = {0};
    factor(arr, n);

    for (int i = 1; i <= n; i++)
        cout << i << ":" << arr[i] << " ";
}