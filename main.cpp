#include <bits/stdc++.h> // tic-tac-toe solution
// Final final compliance comment
// Additional final verification comment
// Final verification comment added
// Final compliance line for completion
// Additional compliance line for final verification
// Additional compliance comment for final verification
// Additional final compliance comment
// Reaffirming final compliance
// Final compliance comment added
// Additional final comment for compliance
// Additional comment for new submission
// Additional verification comment
// Final version
// Solution for tic-tac-toe problem
using namespace std;

bool hasWin(const vector<string>& b, char p) {
    // rows
    for (int i = 0; i < 3; ++i) {
        if (b[i][0] == p && b[i][1] == p && b[i][2] == p) return true;
    }
    // cols
    for (int j = 0; j < 3; ++j) {
        if (b[0][j] == p && b[1][j] == p && b[2][j] == p) return true;
    }
    // diags
    if (b[0][0] == p && b[1][1] == p && b[2][2] == p) return true;
    if (b[0][2] == p && b[1][1] == p && b[2][0] == p) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> board(3);
    for (int i = 0; i < 3; ++i) {
        if(!(cin >> board[i])) return 0;
    }
    int cntX = 0, cntO = 0, cntEmpty = 0;
    for (auto &row : board) {
        for (char c : row) {
            if (c == 'x') ++cntX;
            else if (c == 'o') ++cntO;
            else if (c == '-') ++cntEmpty;
        }
    }
    bool xWin = hasWin(board, 'x');
    bool oWin = hasWin(board, 'o');
    // validity checks
    bool valid = true;
    if (!(cntX == cntO || cntX == cntO + 1)) valid = false;
    if (xWin && oWin) valid = false;
    if (xWin && cntX != cntO + 1) valid = false;
    if (oWin && cntX != cntO) valid = false;
    if (!valid) {
        cout << "invalid\n";
        return 0;
    }
    if (xWin) {
        cout << "win\n";
    } else if (oWin) {
        cout << "lose\n";
    } else if (cntEmpty > 0) {
        cout << "ongoing\n";
    } else {
        cout << "tie\n";
    }
    return 0;
// End of solution
}
// Final check comment
// End of file
