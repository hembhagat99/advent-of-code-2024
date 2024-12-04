#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    const int size = 1000;

    // your puzzle input
    int leftList[size] = {};
    int rightList[size] = {};

    sort(leftList, leftList + size);
    sort(rightList, rightList + size);

    int totalDistance = 0;

    for(int i = 0; i < size; i++)
    {
        int distance = abs(leftList[i] - rightList[i]);
        totalDistance += distance;
    }

    cout << totalDistance;
    cout << endl;
}