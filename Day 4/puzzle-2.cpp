#include <iostream>
#include <vector>

using namespace std;

const string MAS = "MAS";
const string SAM = "SAM";

bool isXMAS(vector<vector<char>> wordSearch, int i, int j)
{
    int length = wordSearch.size();
    if(i == 0 || i == length - 1 || j == 0 || j == length - 1)
        return false;

    char topLeft = wordSearch[i-1][j-1];
    char topRight = wordSearch[i-1][j+1];
    char bottomRight = wordSearch[i+1][j+1];
    char bottomLeft = wordSearch[i+1][j-1];

    char diagonal1[] = { topLeft, 'A', bottomRight, '\0' };
    char diagonal2[] = { topRight, 'A', bottomLeft, '\0' };

    return (diagonal1 == MAS || diagonal1 == SAM) && (diagonal2 == MAS || diagonal2 == SAM);
} 

int main()
{
    // your puzzle input
    vector<vector<char>> wordSearch = {{}};

    int sum = 0;

    for(int i = 0; i < wordSearch.size(); i++)
    {
        for (int j = 0; j < wordSearch[i].size(); j++)
        {
            char character = wordSearch[i][j];
            if(character == 'A')
            {
                if(isXMAS(wordSearch, i, j))
                    sum++;
            }
        }
        
    }
    cout << sum;
    cout << endl;
}