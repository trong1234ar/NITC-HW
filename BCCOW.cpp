#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int w[16], n, s[16], stop = 0, c, maximum = 0, sum = 0;
void print()
{
    for(int i = 0; i < n;i++)
    {
        sum = sum + w[i] * s[i];
        // cout << s[i];
    }
    // cout << sum << endl;
    if(sum > maximum && sum < c) {
        maximum = sum;
    }
    sum = 0;
    // cout << endl;
}
void init()
{
    for(int i = 0; i < n;i++)
    {
        s[i] = 0;
    }
}
void born()
{
    int i = n - 1;
    while(i >= 0 && s[i] == 1)
    {
        s[i] = 0;
        i--;
    }
    if(i < 0) stop = 1;
    else s[i] = 1;
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
    cin >> c >> n;
    for(int i = 0;i < n; i++)
    {
        cin >> w[i];
    }
    init();
    Operator();
    cout << maximum;
}