#include<bits/stdc++.h>
using namespace std;
int n, dem = 0, x[50], cot[50], d1[50], d2[50];

void Try(int i){
	for( int j = 1; j <= n; j++){
		if (cot[j] == 1 && d1[i - j + n ] == 1 && d2[i + j - 1] == 1){
			x[i] = j;
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			if (i == n) dem++;
			else Try(i+1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}
int main(){
	cin >> n;
	for (int i = 1; i <= 50; i++){
		cot[i] = d1[i] = d2[i] = 1;
	}
	Try(1);
	cout << dem;
	return 0;
}
