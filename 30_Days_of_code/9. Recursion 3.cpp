#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    int fact;
    if(n <= 1)
    fact = 1;
    else
    fact = n * factorial(n - 1);
    return fact;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
