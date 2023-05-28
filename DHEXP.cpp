#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pavot = arr[(left + right) / 2];
    while (i <= j)
    {
        while(arr[i] < pavot) i++;
        while(arr[j] > pavot) j--;
        if(i <= j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(left < j) quickSort(arr,left, j);
    if(i < right) quickSort(arr, i, right);
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 1, n-1);
    ll sum = arr[0];
    for(int i = n - 1;i > 0;i--)
    {
        if(k > 0)
        {
            sum += arr[i];
            k--;
        } else {
            sum -= arr[i];
        }
    }
    cout << sum;
}