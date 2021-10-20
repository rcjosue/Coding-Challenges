#include <iostream>
#include <string>
#include <stack>
#include <utility>

std::string s[50];

int map[50][50] = {};

std::stack<std::pair<int, int>> stk;

int main() {
    int w, h;
    int gold = 0;
    std::pair<int, int> pos;

    std::cin >> w >> h;

    for (int i = 0; i < h; i++)
        std::cin >> s[i];

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            if (s[i][j] == 'P') 
                pos = std::pair<int, int>(i, j);

    stk.push(pos);
    
    while (1) {
        if (stk.empty())
            break;
        pos = stk.top();
        stk.pop();
        if (map[pos.first][pos.second])
            continue;
        if (s[pos.first][pos.second] == '#')
            continue;
        map[pos.first][pos.second] = 1;
        if (s[pos.first][pos.second] == 'G') {
            gold++;
        }
        if (s[pos.first - 1][pos.second] == 'T' || s[pos.first + 1][pos.second] == 'T' || s[pos.first][pos.second - 1] == 'T' || s[pos.first][pos.second + 1] == 'T')
            continue;
        stk.push(std::pair<int, int>(pos.first, pos.second - 1));
        stk.push(std::pair<int, int>(pos.first, pos.second + 1));
        stk.push(std::pair<int, int>(pos.first + 1, pos.second));
        stk.push(std::pair<int, int>(pos.first - 1, pos.second));
    }

    std::cout << gold << std::endl;
}