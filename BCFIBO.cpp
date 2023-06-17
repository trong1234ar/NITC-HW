#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int fibo(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}
