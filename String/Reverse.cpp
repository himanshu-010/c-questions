#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;
    int len = str.length();
    int i = 0;
    int j = len - 1;

    for (; i < len / 2; i++)
    {
        int tem = str[i];
        str[i] = str[j];
        str[j] = tem;
        j--;
    }
    cout << str << endl;
}