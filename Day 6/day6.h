#pragma once
#include <vector>
#include <string>

using namespace std;

const vector<string> raw_input = {{"....#.................#......................#..........................#..................#....##..#...........#................."},
{"...................................#...............................#......#..#...............................#...................."},
{"..........................#................#......##.....#.....................................#...............#..#..............."},
{".......................................................................................................#.........................."},
{"...................#....#.........................#..............#.....#......................................................#..."},
{".....#.........................................................................................................#.................."},
{".........................................................#....................#..#............#................#.................."},
{"..............#...............#..................................................................#......#........................."},
{".........#.....#.......#......#.......................#.............#..#........#.......#............#.......#....#..#.......#...."},
{"........................#....#...............................................#...#.#.........................................#...."},
{".........................#........................................................................#.....................#........."},
{".#..........#...#...............#..................#...#......#.................................#....................#.......#...."},
{"............................................................#......#.........................................................#...."},
{".......................#...#..................#.#.............#......................#.............#.............................."},
{"............................................................................................................#.........#..........."},
{"....#..................###........#.............................#.#....................#..........#.....................#........."},
{"................................................................................................#.......................#.#......."},
{"..........................................................................#........#...#.................#.......#................"},
{"..........................#.#..#.#...............................................#..........#..............................#......"},
{"..............#........#.#...............#............................#..........#....................................#........#.#"},
{"#..................................................................................................#...........#................#."},
{"...............................................#........................................#.................................#......."},
{".....#..#......#.......#..............#........#........#...........................................................#............."},
{".......#..........#.......#.#...........#................#.................................................#......................"},
{"....#.....#...............#....#.......#...#.............................................................#...................#...."},
{"............................................#....#.......#................................#......#......................#.....#..."},
{".....................#...................................#....#...........................................................#......."},
{"..#..............................#...........#...........................#.................................#......................"},
{"........#.............................##...................#.....................#................................................"},
{"................#.#.#......#...............................................#...###.........#....#................................."},
{".......#.............#.............#...........#..#...............................#..................................#.....#.....#"},
{".....#...#.......#.........................................#..............................#........................#.............#"},
{"...............................................#.....#..............................................................#............."},
{".........#.......................................#.......................#...........#............................................"},
{".......................#.....#.....................................................#....................................#........."},
{".............................#......................#.....................#..............#..#.......................#............."},
{"......#......................................#.......#.....................#.....#...........#..........#.....................#..."},
{"..................................................#....................#.......#....#.......#...#................................."},
{"......................................#......#........#.....#........................................#.............#.............."},
{"#......................#.#..............#.....#.........#...............................#...............................#........."},
{"#......#...............#.........................................................................................#..#............."},
{".#..............................................#.................#.......#......................................................."},
{"...#.......#.....#.............#...................................................................................#.............."},
{"..........................#........#........#.....................................#........................#..............#..#...."},
{".......#..........#.......#...................................................#.##.....#.#.........#....#.................#......."},
{"..##...................#.......................................#..............#.#........#........................................"},
{"#.......#..............#...........#.....#....#....#............#........#..................................#.#.........#........."},
{"..................#.......................................................................................................#......."},
{"............................#.........#....................#...............................#..........#..........................."},
{".............#.....................................................................#.....#.................#......................"},
{"...#...#............#..........................#..........................................#......................................."},
{"..#.............#.#........................#...#.......................#.........#....................##....#....................."},
{"...........................................................................................................#.........#...#........"},
{".............................#.#..........................................................................................#......."},
{"....................#........................#.#......#...............#......#.............................#......................"},
{"....#...#.......#..................#..........................................................#........................#.........."},
{".#...........#..............................................#...........................................#........................."},
{"..............................#...........#...........................................#.........#...........................#....#"},
{"............#.......#......#....#.......................................................................#........................."},
{".........................................#...#..................#..................#.....................................#........"},
{"................#..................#........#.........................#...................#......................................#"},
{"............................................................#.....#........#......................................................"},
{"..............................#............#.........................................#.............#.......#..#..................."},
{"...#............#........................................................................#..................................#....#"},
{"..............................#.......#.............#.................................................#..........................."},
{".....#.................................................#..........#...............................#..##..........................#"},
{".............#.........................................................#.............................#..#..............#........#."},
{"....................#...............#................................................................................#....#......#"},
{"........#....#..#...........................................................................#................#..............#....."},
{"....#......................#...............#..........#......#.........#..^....#..........#..................#.......#............"},
{"...........................#.#...................................................#...............................#................"},
{"#..#.........................................................#.....#........................#....................................."},
{".#.#....#.......................................#......#..........#................#..#..........................................."},
{"...#.....#..........#...................#.......#............................#...................................................."},
{".............#......................................................#............#.....................#.....................#...."},
{"...................#.............................................................................................#................"},
{"...................#.....#...................................................................................................#...."},
{"................#............#......................#.......#..................#..#.....................#..............#........#."},
{"#....#...................................................................#.......##....#..........#..............................."},
{".........................................#............#......#.......................#........#..............#.#.................."},
{".##........#.....#...........................................................................................#..............#....."},
{"#...........................................................#.......#....#......#..#...................................#..#.#....."},
{".............#........................................#...............................#..........................................."},
{"......................#..................................................................#..................................#....."},
{"...#.#........................................#.................................................................................#."},
{".............#.......................#............................#.#................................#.......#..#...........#....."},
{"...#..#...............................................................................#................#.........................."},
{".......#.............................#............#..#........#.....#.........................#..................#................"},
{"......#...............................................................................##.................................#....#..."},
{"........#..................#.......................................................................#......#..........#............"},
{"...........#.......#........#..........................................#........#..............#.................#.........#......"},
{"...................#..............................#...............................#.....................#.....#..................."},
{".............#..#..................#.#..#.....#..#..........................................................................#....."},
{"..............................#...................................................#.......................#..............#........"},
{".......#......................#.............................#...........................#.....#...#.................#........#...."},
{".........#.......#....##.........................................................................................................."},
{"........................................................................#......................#.................................."},
{".......................#..........##.#................................................#..#.....#......#......#.................#.."},
{"......................................#......................................................................#...................."},
{".....................................#....#...............................................#...#.....#.......#...#...........#....."},
{"...................#..#................................................................................#.........................."},
{"..............#.................#..............................#..............#...........#.#..................#...#.............#"},
{"................#..#......#.........................#.....#.....#..............#..#.........................................#....."},
{".....#.........................#........................................#.....#.......#...........#...................#..........."},
{"......#....................##......................................................................................#.............."},
{"............................................................................###...............................#..................."},
{"#..................................#......#..............................................................................#.......#"},
{".....#...................#.....#............................................................#.....................#...#..........."},
{".......#......#........................#.....................#.#..##............#......#.................#.....................#.."},
{".....#..............#.................#........#..................#..#..........................##.....#..#...................#..."},
{"........#................#................#...........#.........................................#....................#............"},
{".........#.........#....#................#........#........#...............#....#................................................."},
{"...........#...#............#..................#.............................#.#..#....................#.#........................"},
{".#............#..#..#................#.#................................................................##.............#.........."},
{"...........#.......................#.........................................................#...................................."},
{"..#..........................#...........#......#................................#.#.............................................."},
{"............................................................#..................#...........#.....##.................#............."},
{"....#.........#............................##..........................................#.....#....#..........#...................."},
{"..................#..............#........#........#....................#..............#....................#....................."},
{"....#...................................#.....................................................#.............#...................#."},
{".........#...........#...#.............................#.............##..#................................................#.#....."},
{"............................##..............#................#..#........................................#....................#..."},
{".............................#.#......................................................##.....#..................................#."},
{".............................................................................#..................#...#.................#..........."},
{"........................#...........#..................#......#..................................................................."},
{".....#.......................#......#................#............#..................#.................................#.........."},
{"#..........#...................................................................#...................#...#...............#.........."},
{"....................#............................................#...............#........................##....#..#.............."},
{".#.....#............................#...............#.#.#..........................#.........#..............#....................."},
{".............................#....................................#..#......#........................#............................"}};

vector<vector<char>> getPuzzleInput()
{
    vector<vector<char>> input;

    for(auto str:raw_input)
    {
        input.push_back(vector<char>(str.begin(), str.end()));
    }
    
    return input;

    // return vector<vector<char>> {
    //     {'.', '#', '.', '.'},
    //     {'.', '.', '.', '#'},
    //     {'#', '^', '.', '.'},
    //     {'.', '#', '.', '.'},
    //     {'.', '.', '#', '.'}
    // };
};