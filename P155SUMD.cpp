#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int binarySearch(int a[], int value, int left, int right)
{
    int ans;
    while(left <= right) {
        int middle = (left + right) / 2;
        if (a[middle] <= value) { 
            ans = middle;       
            left = middle + 1;    
        } else right = middle - 1;
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 10], b[m + 10];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        if(b[i] >= a[0])
        {
            int index = binarySearch(a, b[i], 0, n - 1);
            cout << index + 1 << endl;
        } else {
            cout  << 0 << endl;
        }
    }
    

}