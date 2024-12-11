#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> directions = {
    {-1, 0},
    {0, 1},
    {1, 0},
    {0, -1}
};

vector<int> getNextPos(vector<int> currentPos, int direction) {
    vector<int> directionCoordinates = directions[direction];
    return vector<int>{ currentPos[0] + directionCoordinates[0], currentPos[1] + directionCoordinates[1]};
}

bool isInBound(vector<int> pos, int rowSize, int colSize) {
    return pos[0] >= 0 && pos[0] < rowSize && pos[1] >= 0 && pos[1] < colSize;
}

bool doesFormCycle(vector<vector<char>> map, vector<int> startPos, vector<int> nextPos, int currentDirection) {
    
    map[nextPos[0]][nextPos[1]] = '#';
    
    int rowSize = map.size();
    int colSize = map[0].size();
    
    unordered_set<string> visited;
    
    vector<int> currentPos = startPos;
    int newDirection = currentDirection;
    
    while(true) {
        string cell = to_string(currentPos[0]) + "," + to_string(currentPos[1]) + "," + to_string(newDirection);
        
        if(visited.count(cell)) return true;
        visited.insert(cell);
        
        vector<int> next = getNextPos(currentPos, newDirection);
        if(!isInBound(next, rowSize, colSize)) return false;
        else if(map[next[0]][next[1]] == '#') newDirection = (newDirection + 1) % 4;
        else currentPos = next;
    }
}

int main() {
    vector<string> input = {};
    
    vector<vector<char>> map;
    
    for(auto str:input) {
        vector<char> charVector(str.begin(), str.end());
        map.push_back(charVector);
    }
    
    int rowSize = map.size();
    int colSize = map[0].size();
    
    vector<int> initialPos = {0, 0};
    for(int i=0;i<map.size();i++) {
        for(int j=0;j<map[i].size();j++) {
            if(map[i][j] == '^') {
                initialPos[0] = i;
                initialPos[1] = j;
            }
        }
    }
    
    unordered_set<string> visited;
    
    int sum = 0;
    int iterations = 0;
    
    for(int i=0;i<map.size();i++) {
        for(int j=0;j<map[i].size();j++) {
            vector<int> obstaclePos = {i, j};
            if(map[i][j] == '.' && doesFormCycle(map, initialPos, obstaclePos, 0))
                sum++;
        }
    }
    
    cout << << sum << endl;
    return 0;
}
