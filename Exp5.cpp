// Arranging a string in alphabetic order using sorting.

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cout << "enter string: ";
    gets(str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[j] < str[i])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout << str << endl;
    return 0;
}