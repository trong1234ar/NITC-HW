#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, stop = 0, a[10];
void init()
{
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}
void print()
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
void born()
{
    int i = n - 1;
    while(i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i < 0) stop = 1;
    else a[i] = 1;
}
void Operator()
{
    while(stop == 0)
    {
        print();
        born();
    }
}
int main()
{
    cin >> n;
    init();
    Operator();
}