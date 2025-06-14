#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char dist[10][10];

bool check_status(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int _x = x + dx[i], _y = y + dy[i];

        if (_x >= 0 && _x < 10 && _y >= 0 && _y < 10) {
            char ch = dist[_x][_y];
            if (ch < 'A' || ch > 'Z') {
                return true;
            }
        }
    }
    return false;
}

int main() {
    srand(time(0));

    int x = 0, y = 0, _x = 0, _y = 0, idx = 0;
    while (check_status(x, y)) {
        dist[x][y] = 'A' + idx;
        idx = (idx + 1) % 26;

        while (_x < 0 || _x >= 10 ||
               _y < 0 || _y >= 10 ||
               (dist[_x][_y] >= 'A' && dist[_x][_y] <= 'Z')) {
            int pos = rand() % 4;
            _x = x + dx[pos], _y = y + dy[pos];
        }

        x = _x, y = _y;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char ch = dist[i][j];
            if (ch < 'A' || ch > 'Z')
                ch = '.';
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
