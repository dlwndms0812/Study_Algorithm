#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int dy[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
    
    int n = board.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) {
                for (int k = 0; k < 8; k++) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    
                    if (ny >= 0 && ny < n && 
                        nx >= 0 && nx < n &&
                        board[ny][nx] == 0) {
                        board[ny][nx] = -1;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0)
                answer++;
        }
    }
    
    return answer;
}
