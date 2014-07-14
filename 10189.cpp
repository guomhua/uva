/*--------------------

UVa 10189 - Minesweeper
mguo.ca

--------------------*/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void increment_hint (vector<vector<int>> &board, int i, int j) {
	if (!(	i < 0 
			|| i >= board.size() 
			|| j < 0 
			|| j >= board[0].size()
			|| board[i][j] == -1))
		board[i][j] += 1;
}

void print_board (vector<vector<int>> &board, int x, int y) {
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (board[i][j] == -1)
				cout << "*";
			else
				cout << board[i][j];
		}
		cout << endl;
	}
}

int main () {
	int x = 0;
	int y = 0;
	string input;
	stringstream ss;
	for (int field = 1; getline(cin, input); field++) {
		// Get dimension
		ss.clear();
		ss.str(input);
		ss >> y >> x;
		if (x == 0 && y == 0)
			break;
		// Initialize zero board
		vector<vector<int>> board;
		for (int i = 0; i < y; i++) {
			vector<int> row (x, 0);
			board.push_back(row);
		}
		for (int i = 0; i < y; i++) {
			getline(cin, input);
			for (int j = 0; j < x; j++) {
				char c = input[j];
				// Fill/increment adjacent hints
				if (c == '*') {
					board[i][j] = -1;
					increment_hint(board, i-1, j-1);
					increment_hint(board, i-1, j);
					increment_hint(board, i-1, j+1);
					increment_hint(board, i, j-1);
					increment_hint(board, i, j+1);
					increment_hint(board, i+1, j-1);
					increment_hint(board, i+1, j);
					increment_hint(board, i+1, j+1);
				}
			}
		}
		if (field != 1) cout << endl;
		cout << "Field #" << field << ":" << endl;
		print_board(board, x, y);
	}
	return 0;
}
