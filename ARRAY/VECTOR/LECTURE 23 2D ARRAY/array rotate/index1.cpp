

#include <iostream>
using namespace std;

const int SIZE = 5;

void showMap(char map[SIZE][SIZE]) {
    cout << "\n===== TREASURE HUNTER =====\n\n";

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << map[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {
    char map[SIZE][SIZE] = {
        {'P', '.', '.', 'X', '.'},
        {'.', 'X', '.', '.', '.'},
        {'.', '.', 'X', '.', 'T'},
        {'X', '.', '.', '.', '.'},
        {'.', '.', 'T', '.', '.'}
    };

    int row = 0, col = 0;
    char move;
    int treasures = 0;

    while (true) {
        showMap(map);

        cout << "\nMove: W = Up, S = Down, "
             << "A = Left, D = Right\n";
        cout << "Enter move: ";
        cin >> move;

        int newRow = row;
        int newCol = col;

        if (move == 'w' || move == 'W')
            newRow--;
        else if (move == 's' || move == 'S')
            newRow++;
        else if (move == 'a' || move == 'A')
            newCol--;
        else if (move == 'd' || move == 'D')
            newCol++;
        else {
            cout << "Invalid move!\n";
            continue;
        }

        if (newRow < 0 || newRow >= SIZE ||
            newCol < 0 || newCol >= SIZE) {
            cout << "You cannot leave the map!\n";
            continue;
        }

        if (map[newRow][newCol] == 'X') {
            cout << "Trap! Choose another path.\n";
            continue;
        }

        if (map[newRow][newCol] == 'T') {
            treasures++;
            cout << "Treasure collected! Total: "
                 << treasures << endl;
        }

        map[row][col] = '.';
        row = newRow;
        col = newCol;
        map[row][col] = 'P';

        if (treasures == 2) {
            showMap(map);
            cout << "\nYOU WIN! All treasures collected!\n";
            break;
        }
    }

    return 0;
}
