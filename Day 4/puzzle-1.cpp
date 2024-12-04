#include <iostream>
#include <vector>

using namespace std;

const string XMAS = "XMAS";

bool isValidIndex(vector<vector<char>> wordSearch, int index)
{
    int length = wordSearch.size();
    return index >= 0 && index < length;
}

bool isXMAS(
    vector<vector<char>> wordSearch,
    vector<int> currentPosition,
    vector<int> direction,
    int patternIndex)
{
    if(patternIndex == XMAS.length())
        return true;

    int newX = currentPosition[0] + direction[0];
    int newY = currentPosition[1] + direction[1];

    if(isValidIndex(wordSearch, newX) && isValidIndex(wordSearch, newY) && wordSearch[newX][newY] == XMAS[patternIndex])
        return isXMAS(wordSearch, vector<int> { newX, newY}, direction, patternIndex + 1);

    return false;
} 

int main()
{
    const vector<vector<int>> directions =
    {
        { 0, -1 }, // left
        { -1, -1 }, // up-left
        { -1, 0 }, // up
        { -1, 1 }, // up-right
        { 0, 1 }, // right
        { 1, 1 }, // down-right
        { 1, 0 }, // down
        { 1, -1 }, // down-left
    };

    // your puzzle input
    vector<vector<char>> wordSearch = {{}};

    int sum = 0;

    for(int i = 0; i < wordSearch.size(); i++)
    {
        for (int j = 0; j < wordSearch[i].size(); j++)
        {
            char character = wordSearch[i][j];
            if(character == 'X')
            {
                for(auto direction:directions) {
                    if(isXMAS(wordSearch, vector<int>{i, j}, direction, 1))
                        sum++;
                }
            }
        }
        
    }
    cout << sum;
    cout << endl;
}