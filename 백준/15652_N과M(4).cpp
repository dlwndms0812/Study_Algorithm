#include <iostream>
#include <cstring>

using namespace std;

bool visited[9];
int arr[9];
int n, m;

void fun(int a,int b) {
    if (a == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << "\n";
        return;
   }
    for (int i = b; i <= n; i++) {
           
        arr[a] = i;
        fun(a + 1,i);
        

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    cin >> n >> m;

    memset(visited, 0, sizeof(visited));
    
    fun(0,1);

    return 0;
}
   
