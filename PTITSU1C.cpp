#include<iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int binarySearch(int a[], int value, int left, int right)
{
    int middle;
    while(left <= right)
    {
        middle = ( left + right) / 2;
        if(a[middle] == value) return middle;
        else if(a[middle] > value) right = middle - 1;
        else left = middle + 1;
    }
    return middle;
}
int main()
{
    int test;
    cin >> test;
    int n, sum;
    while(test--)
    {
        cin >> n >> sum;
        int arr[n], tmp, max = 0, tmpI;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n - 2; i++)
        {
            for(int j = i + 1; j < n - 1; j++)
            {
                for(int k=j+1;k<n;k++){
                int tmp = arr[i]+arr[j]+arr[k];
                if (tmp <= sum && tmp > max){
                max = tmp;
                }
                }
            }
        }
        cout << max << endl;
    }
}
