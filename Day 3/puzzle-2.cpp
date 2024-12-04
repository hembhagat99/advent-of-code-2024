#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    // your puzzle input
    string corruptedMemory = "";
    
    regex pattern(R"(mul\(([0-9]{1,3}),([0-9]{1,3})\)|do\(\)|don't\(\))");
    smatch matches;
    int sum = 0;
    bool enabled = true;

    while (regex_search(corruptedMemory, matches, pattern)) {
        string match = matches[0];

        if(match == "don't()") enabled = false;
        else if(match == "do()") enabled = true;
        else if(enabled)
        {
            int op1 = stoi(matches[1]), op2 = stoi(matches[2]);
            sum += (op1 * op2);
        }

        corruptedMemory = matches.suffix().str();
    }
    
    cout << sum;
    cout << endl;
}