#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    if (strcmp(str1, str2) == 0)
    {
        cout << "Eual" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    return 0;
}
