#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> a)
    {
        maximumDifference = a[0] - a[1];

        for(int i = 0; i < a.size(); i ++)
            elements.push_back(a[i]);
    }

    int computeDifference()
    {
        int diff;
        for(int i = 0; i < elements.size(); i++)
        {
            for(int j = i + 1; j < elements.size(); j++)
                {
                    diff = abs(elements[i] - elements[j]);
                    if(diff > maximumDifference)
                    maximumDifference = diff;
                }
        }
        return maximumDifference;
    }

};
