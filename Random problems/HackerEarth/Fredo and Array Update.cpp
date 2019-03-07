#include <iostream>

using namespace std;

int main() {
	int i, N, A[100000], sum = 0, min;
	cin >> N;
	for(i = 0; i < N; i++)
	cin >> A[i];
	
	for(i = 0; i < N; i++)
	sum += A[i];
	
	min = sum / N + 1;
	cout << min;
	
	return 0;
}
	
