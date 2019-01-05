#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

    stringstream ss(str);
    vector<int> a;
    int b;
    char ch;

    while( ss >> b)
    {
        a.push_back(b);
        ss >> ch;
    }

    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
