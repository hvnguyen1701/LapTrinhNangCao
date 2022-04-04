#include <iostream>

using namespace std;

const int MAX_SIDE_LENGTH = 1e3;

void readInput();
void dfs(int x, int y);
void printOutput();

int dx[] = {1, 1, 1}, dy[] = {0, 1, -1}, w, h, myX, myY;
string grid[MAX_SIDE_LENGTH];
bool isAlive = false;

int main() {
    readInput();
    dfs(myX, myY);
    printOutput();
    
    return 0;
}

void readInput() {
    cin >> w >> h;
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
        for (int j = 0; j < w; j++)
            if (grid[i][j] == 'Y') {
                myX = i;
                myY = j;
            }
    }
}

void dfs(int x, int y) {
    if (x == h - 1) isAlive = true;
    if (isAlive) return;
    for (int i = 0; i < 3; i++) {
        int nextX = x + dx[i], nextY = y + dy[i];
        if (i == 1 && grid[x][y + 1] == 'R') continue;
        if (i == 2 && grid[x][y - 1] == 'R') continue;
        if (grid[nextX][nextY] == 'R') continue;
        if (nextX >= h || nextY < 0 || nextY >= w) continue;
        grid[nextX][nextY] = 'R';
        dfs(nextX, nextY);
    }
}

void printOutput() {
    if (isAlive) cout << "YES";
    else cout << "NO";
}