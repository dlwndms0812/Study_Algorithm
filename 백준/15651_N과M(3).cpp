#include <iostream>
#include <cstring>

using namespace std;

bool visited[9];
int arr[9];
int n, m;

void fun(int a) {
    if (a == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << "\n";
        return;
   }
    for (int i = 1; i <= n; i++) {
     
        arr[a] = i;
        fun(a + 1);
        

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    cin >> n >> m;

    memset(visited, 0, sizeof(visited));
    
    fun(0);

    return 0;
}
   
