#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

bool isSafe(vector<int> record)
{
    bool ascending = true, descending = true;

    for(size_t i = 1; i < record.size(); i++)
    {
        int data1 = record[i - 1];
        int data2 = record[i];

        int absoluteDiff = abs(data1 - data2);
        if(absoluteDiff < 1 || absoluteDiff > 3) return false;

        if(data1 > data2) ascending = false;
        else if(data2 > data1) descending = false;

        if(!ascending && !descending) return false;
    }

    return true;
}

int main()
{
    // your puzzle input
    vector<vector<int>> unusalData = {{}};

    int safeReports = 0;

    for(size_t i = 0; i < unusalData.size(); i++)
    {
        if(isSafe(unusalData[i])) safeReports++;
    }

    cout << safeReports;
    cout << endl;
}