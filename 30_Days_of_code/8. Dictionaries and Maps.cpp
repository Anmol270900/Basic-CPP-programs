#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
      
    map<string,long long> m;
    string name, query;
    long long phno, Q, n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name >> phno;
        m.insert(make_pair(name,phno));
    }
    while(cin >> query)
    {
        map<string, long long>::iterator itr = m.find(query);
        if(itr == m.end())
        cout << "Not found\n";
        else
        cout << query << "=" << m[query] <<"\n";
    }
    return 0;
}
