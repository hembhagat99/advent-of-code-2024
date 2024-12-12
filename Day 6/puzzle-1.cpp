#include <iostream>
#include <vector>
#include <string>
#include "day6.h"

using namespace std;

vector<vector<int>> Directions = {
    { -1, 0 },
    { 0, 1 },
    { 1, 0 },
    { 0, -1 }
};

bool isInBound(vector<int> currentPos, int rowSize, int colSize) {
    int x = currentPos[0];
    int y = currentPos[1];

    return x >=0 && x < rowSize
        && y >= 0 && y < colSize;
}

vector<int> getNextPosInDirection(vector<int> currentPos, int direction) {
    vector<int> directionCoordinates = Directions[direction];
    return vector<int> { currentPos[0] + directionCoordinates[0], currentPos[1] + directionCoordinates[1] };
}

int main()
{
    vector<vector<char>> map = getPuzzleInput();

    int rowSize = map.size();
    int colSize = map[0].size();

    vector<int> currentPos;
    for(int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[i].size(); j++) {
            char character = map[i][j];
            if(character == '^') {
                currentPos = vector<int>{ i, j };
                break;
            }
        }
    }

    int currentDirection = 0;
    int sum = 0;

    while(true) {
        vector<int> nextPos = getNextPosInDirection(currentPos, currentDirection);

        // cout << nextPos[0] << ", " << nextPos[1] << endl;

        if (!isInBound(nextPos, rowSize, colSize))
            break;

        if (map[nextPos[0]][nextPos[1]] == '#')
            currentDirection = (currentDirection + 1) % 4;
        else
        {
            if (map[nextPos[0]][nextPos[1]] != 'X') {
                map[nextPos[0]][nextPos[1]] = 'X';
                sum++;
            }
            
            currentPos = nextPos;
        }
    }
    
    cout << sum + 1;
    cout << endl;
}