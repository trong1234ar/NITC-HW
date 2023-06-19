#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, back[16], c[16][16];
ll sum = 0, minimum = 1e8, cMin = 1e8;
bool used[16];
// void ans()
// {
//     sum = c[back[n]][1];
//     for(int i = 2; i <= n; i++)
//     {
//         sum += c[back[i - 1]][back[i]];
//     }
    
//     if(sum < minimum) minimum = sum;
// }

void bt(int i)
{
    for(int j = 2; j <= n; j++)
    {
        if(!used[j])
        {
            back[i] = j;
            used[j] = true;
            sum += c[back[i - 1]][j];
            if(i == n) {
                if(sum + c[back[n]][1] < minimum) minimum = sum + c[back[n]][1];
            }
            else if(sum + (n - i + 1) * cMin < minimum) bt(i + 1);
            used[j] = false;
            sum -= c[back[i - 1]][j];
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            if(c[i][j] < cMin) cMin = c[i][j];
        }
    }
    back[1] = 1;
    bt(2);
    cout << minimum;
}
