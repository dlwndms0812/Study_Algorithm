#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int check=phone_number.length();
    check=check-4;
    string arr="";
    for(int i=0;i<check;i++){
        arr.push_back('*');
    }
    answer=phone_number.replace(0,check,arr);
    return answer;
}
