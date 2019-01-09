#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, count = 0, max = 0, r; 
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n > 0)
    {
        r = n % 2;
        n = n / 2;
    
        if(r == 1)
        {
            count++;
            if(count > max)
            max = count;
        }
        else
        count = 0;
    }
    cout << max;
    return 0;
}
