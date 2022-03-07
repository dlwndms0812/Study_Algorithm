#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score) {
        this->name = name;
        this->score = score;
    }
    
    bool operator <(Student& other) {
        return this->score < other.score;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
       
    int n;
    cin >> n;
    
    vector<Student> v;

    for (int i = 0; i < n; i++) {
        string str;
        int a;
        cin >> str >> a;
        v.push_back(Student(str, a));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].name << " ";
    }

    return 0;
}
   
