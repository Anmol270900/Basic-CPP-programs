#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    map<string,int> m;
    int Q, type, Y;
    string X;
    cin >> Q;
    for( int i = 0; i < Q; i++)
    {
        cin >> type;
        if( type == 1)
        {
            cin >> X >> Y;
            
            map<string,int> ::iterator itr = m.find(X);
            if( itr != m.end())
            m[X] = m[X] + Y;
            else
            m.insert(make_pair(X,Y));
        }
        else if( type == 2)
        {
            cin >> X;
            m.erase(X);
        }
        else if( type == 3)
        {
            cin >> X;
            map<string,int>::iterator itr = m.find(X);
            if(itr == m.end())
            cout << "0 \n";
            else
            cout << m[X] << "\n";
        }
    }
    return 0;
}
