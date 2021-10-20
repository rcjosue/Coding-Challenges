#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <utility>

typedef std::pair<int, int> ii;

int map[100][100] = {};
std::string s[100];
std::stack<ii> stk;

int main() {
    std::string a;
    int m, n;
    int star;
    int c = 1;
    ii pos;
    while (1) {
        star = 0;
        std::getline(std::cin, a);
        std::stringstream as(a);
        as >> m >> n;

        if (!as)
            break;

        for (int i = 0; i < m; i++) 
            for (int j = 0; j < n; j++)
                map[i][j] = 0;
        

        for (int i = 0; i < m; i++)
            std::getline(std::cin, s[i]);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                if (s[i][j] == '-' && map[i][j] == 0) {
                    star++;
                    stk.push(ii(i, j));
                    while (!stk.empty()) {
                        pos = stk.top();
                        stk.pop();
                        if (pos.first < 0 || pos.first == m || pos.second < 0 || pos.second == n)
                            continue;
                        if (map[pos.first][pos.second] || s[pos.first][pos.second] != '-')
                            continue;
                        map[pos.first][pos.second] = star;
                        stk.push(ii(pos.first, pos.second - 1));
                        stk.push(ii(pos.first, pos.second + 1));
                        stk.push(ii(pos.first - 1, pos.second));
                        stk.push(ii(pos.first + 1, pos.second));
                    }

                }
            }
        
        printf("Case %d: %d\n", c++, star);
    }
    return 0;
}
