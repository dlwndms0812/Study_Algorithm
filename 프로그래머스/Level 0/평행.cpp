#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int list[3][4] = {{0, 1, 2, 3},
                      {0, 2, 1, 3},
                      {0, 3, 1, 2}};
    
    for (int i = 0; i < 3; i++) {
        double width1 = dots[list[i][0]][0] - dots[list[i][1]][0];
        double height1 = dots[list[i][0]][1] - dots[list[i][1]][1];
        
        double gradient1 = height1 / width1;
        
        double width2 = dots[list[i][2]][0] - dots[list[i][3]][0];
        double height2 = dots[list[i][2]][1] - dots[list[i][3]][1];
        
        double gradient2 = height2 / width2;
        
        if (gradient1 == gradient2) {
            answer = 1;
            break;
        }
    }
    
    return answer;
}
