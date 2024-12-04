#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    // your puzzle input
    string corruptedMemory = "";

    regex pattern(R"(mul\(([0-9]{1,3}),([0-9]{1,3})\))");
    smatch matches;
    int sum = 0;

    while (regex_search(corruptedMemory, matches, pattern)) {
        int op1 = stoi(matches[1]), op2 = stoi(matches[2]);
        
        sum += (op1 * op2);
        corruptedMemory = matches.suffix().str();
    }
    
    cout << sum;
    cout << endl;
}