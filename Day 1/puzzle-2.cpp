#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;

int main()
{
    const int size = 1000;
    unordered_map<int, int> map;

    int similarityScore = 0;

    // your puzzle input
    int leftList[size] = {};
    int rightList[size] = {};

    for(int i = 0; i < size; i++)
        map[rightList[i]]++;

    for(int i = 0; i < size; i++) 
    {
        similarityScore += (leftList[i] * map[leftList[i]]);
    }

    cout << similarityScore;
    cout << endl;
}