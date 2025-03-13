#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n<=1){
        return 0;
    }

    if(n==2){
        return 1;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter a number n : ";
    cin >> n;
    if (isprime(n))
    {
        cout << n << " is prime" << endl;
    }

    else
    {
        cout << n << " is not prime" << endl;
    }
}