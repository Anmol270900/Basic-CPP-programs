#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int i, N, Q, p, lower;
    vector<int> a;
    cin >> N;
    for( i = 0; i < N; i++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    cin >> Q;
    for( i = 0; i < Q; i++ )
    {
        cin >> p;
        vector<int>::iterator lower = lower_bound (a.begin(), a.end(), p); 
        if( a[lower - a.begin()] == p)
            cout << "Yes " << (lower - a.begin() + 1) << "\n";
        else
            cout << "No " << (lower - a.begin() + 1) << "\n";
    }

    return 0;
}
