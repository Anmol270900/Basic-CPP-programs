#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {   
    set<int> s;
    int Q, y, x;
    cin >> Q;
    for( int i =0; i < Q; i++)
    {
        cin >> y >> x;
        set<int>::iterator itr;
        if( y == 1)
        s.insert(x);
        else if( y == 2)
        s.erase(x);
        else if( y == 3)
        {
        itr = s.find(x);
        if( itr == s.end())
        cout << "No\n";
        else
        cout << "Yes\n";
        }
    }
    return 0;
}