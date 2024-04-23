#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int grid[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];
int rows, cols;

bool isValid(int x, int y) {
    return (x >= 0 && x < rows && y >= 0 && y < cols && grid[x][y] == 1 && !visited[x][y]);
}

void DFS(int x, int y) {
    visited[x][y] = true;

    int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

    for (int i = 0; i < 8; ++i) {
        int nextX = x + row[i];
        int nextY = y + col[i];
        
        if (isValid(nextX, nextY)) {
            DFS(nextX, nextY);
        }
    }
}

int countIslands() {
    int islandCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                DFS(i, j); 
                ++islandCount; 
            }
        }
    }
    return islandCount;
}

int main() {
    cin >> rows >> cols;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
            visited[i][j] = false;
        }
    }

    int islands = countIslands();

    cout << islands << endl;

    return 0;
}
