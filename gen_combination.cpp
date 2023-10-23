#include<bits/stdc++.h>

using namespace std;
int len;

void printArray(int a[], int k){
	for(int i = 0; i < k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int a[], int index, int i, int n, int k){
	if (k == 0){
		printArray(a, len);
		return;
	}
	for(int b = i; b <= n - k + 1; b++){
		a[index] = b; 
		Try(a, index+1, b+1, n, k-1);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> k >> n;
	len = k;
	int array[k];
	Try(array, 0, 1, n, k);
}
