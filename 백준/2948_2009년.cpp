#include <iostream>

using namespace std;

int main()
{
    int m, d;
    
    cin >> d >> m;
    
    int sum = 0;
   
    for (int i = 1; i < m; i++)
    {
       
        if (i == m)
            break;
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            sum += 31;
        else if (i == 2)
            sum += 28;
        else
            sum += 30;
    }
    
    sum += d;
    
    if (sum % 7 == 1)
        printf("Thursday\n");
    else if (sum % 7 == 2)
        printf("Friday\n");
    else if (sum % 7 == 3)
        printf("Saturday\n");
    else if (sum % 7 == 4)
        printf("Sunday\n");
    else if (sum % 7 == 5)
        printf("Monday\n");
    else if (sum % 7 == 6)
        printf("Tuesday\n");
    else
        printf("Wednesday\n");
    return 0;
}
