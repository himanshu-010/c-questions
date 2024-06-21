#include <iostream>
using namespace std;
int main()
{
    char input[100];
    // cin >> input;
    //  if you print hello world and hello before space then you right World print thee only Hello

    cin.getline(input, 100); // in this line you only print the given value of words 9 writhen there but you only print 8 words
    // cin.getline(input, 9, 'n'); if you right this line 'n' such as after n values not printing
    cout << "Enter the character" << input;
    return 0;
}