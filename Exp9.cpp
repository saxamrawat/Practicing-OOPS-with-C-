// Function Template example

#include <iostream>
using namespace std;

template <class num>
num findLargest(num n1, num n2, num n3)
{
    if (n1 > n2 && n1 > n2)
    {
        return n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}

int main()
{
    cout << findLargest(1, 2, 3);
    return 0;
}
