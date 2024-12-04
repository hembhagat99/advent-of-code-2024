#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

vector<int> removeElementAtIndex(const vector<int> data, int index)
{
    vector<int> result;
    for (size_t i = 0; i < data.size(); i++)
    {
        if(static_cast<int>(i) != index) result.push_back(data[i]);
    }

    return result;
}

bool isSafe(vector<int> record)
{
    bool ascending = true, descending = true, isSafe = true;

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
        vector<int> record = unusalData[i];
        if(isSafe(record))
        {
            safeReports++;
            continue;
        }

        for(size_t j = 0; j < record.size(); j++)
        {
            vector<int> resultantRecord = removeElementAtIndex(record, j);
            if(isSafe(resultantRecord))
            {
                safeReports++;
                break;
            }
        }
    }

    cout << safeReports;
    cout << endl;
}