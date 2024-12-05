#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool areUpdatesInOrder(unordered_map<int, unordered_set<int>> ruleMap, vector<int> update)
{
    vector<int> previousPages;
    for(int i = 1; i < update.size(); i++)
    {
        int page = update[i];
        unordered_set<int> expectedPreviousPages = ruleMap[page];
        
        previousPages.push_back(update[i-1]);
        for(auto previousPage:previousPages)
        {
            if(expectedPreviousPages.find(previousPage) == expectedPreviousPages.end())
                return false;
        }
    }
    
    return true;
}

int main() {
    // your puzzle input
    vector<vector<int>> orderRules = {{}};
    vector<vector<int>> updates = {{}};
    
    unordered_map<int, unordered_set<int>> map;
    int sum = 0;
    
    for(auto rule:orderRules)
        map[rule[1]].insert(rule[0]);
        
    vector<vector<int>> incorrectUpdates;
    for(auto update:updates)
    {
        if(!areUpdatesInOrder(map, update))
            incorrectUpdates.push_back(update);
    }
    
    for(auto incorrectUpdate:incorrectUpdates)
    {
        sort(incorrectUpdate.begin(), incorrectUpdate.end(), [&map](int a, int b){
            unordered_set<int> expectedPreviousPages = map.at(b);
            return expectedPreviousPages.find(a) != expectedPreviousPages.end();
        });
        
        int middleNumber = incorrectUpdate[incorrectUpdate.size() / 2];
        sum += middleNumber;
    }

    cout << sum;
}
