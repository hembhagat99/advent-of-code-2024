#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

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
        
    for(auto update:updates)
    {
        if(areUpdatesInOrder(map, update))
        {
            int middleValue = update[update.size() / 2];
            sum += middleValue;
        }
    }

    cout << sum;
}
