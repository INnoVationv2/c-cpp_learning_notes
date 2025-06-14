#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

bool check_status(char walk[10][10], int x, int y) {
    for (int i = 0; i < 4; i++) {
        int _x = x + dx[i], _y = y + dy[i];

        if (_x >= 0 && _x < 10 && _y >= 0 && _y < 10) {
            char ch = walk[_x][_y];
            if (ch < 'A' || ch > 'Z') {
                return true;
            }
        }
    }
    return false;
}


void generate_random_walk(char walk[10][10]) {
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            walk[i][j] = '.';

    int x = 0, y = 0, _x = 0, _y = 0, idx = 0;
    while (check_status(walk, x, y)) {
        walk[x][y] = 'A' + idx;
        idx = (idx + 1) % 26;

        while (_x < 0 || _x >= 10 ||
               _y < 0 || _y >= 10 ||
               (walk[_x][_y] >= 'A' && walk[_x][_y] <= 'Z')) {
            int pos = rand() % 4;
            _x = x + dx[pos], _y = y + dy[pos];
        }

        x = _x, y = _y;
    }
}

void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            char ch = walk[i][j];
            if (ch < 'A' || ch > 'Z')
                ch = '.';
            printf("%c ", ch);
        }
        printf("\n");
    }
}


int main() {
    srand(time(0));

    int walk[10][10];
    generate_random_walk(walk);
    print_array(walk);

    return 0;
}
