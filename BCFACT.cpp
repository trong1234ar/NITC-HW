#include<bits/stdc++.h>
using namespace std;
// #define loop(i,a,n) for(int i = 0;i < n;i++);

unsigned long long giai_thua(unsigned long long a)
{
    if(a == 1)
    {
        return 1;
    }
    else
    {
        return a * giai_thua(a - 1);
    }
}
int main()
{
    unsigned long long input;
    while(1 > 0)
    {
        cin >> input;
        if(input == 0)
        {
            break;
        }
        unsigned long long result = giai_thua(input);
        cout << result << endl;
    }
}
