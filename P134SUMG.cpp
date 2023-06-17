#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int T, sour[11], spicy[11], b[11], stop, sumSour = 1, sumSpicy = 0, minimum = 1e9, sum = 0;
void creating()
{
    for(int i = 0;i < T; i++)
    {
        if(i != T - 1) b[i] = 0;
        else b[i] = 1;
    }
}
void binary()
{
    int i = T - 1;
    while(i >= 0 && b[i] == 1)
    {
        b[i] = 0;
        i--;
    }
    if(i < 0) stop = 1;
    else b[i] = 1;
}
void ans()
{
    sumSour = 1;
    sumSpicy = 0;
    for(int i = 0;i < T; i++)
    {
        if(b[i] != 0)
        {
            sumSour = sumSour * sour[i] * b[i];
            sumSpicy = sumSpicy + spicy[i] * b[i];
        }
        
    }
    if(abs(sumSour - sumSpicy) < minimum)
    {
        minimum = abs(sumSour - sumSpicy);
    }
    
}
void operating()
{
    stop = 0;
    while(!stop)
    {
        ans();
        binary();
    }
    
}


int main()
{
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> sour[i] >> spicy[i];
    }
    creating();
    operating();
    cout << minimum;
}
