// Operations on Dates using Operator Overloading.

#include <iostream>
using namespace std;

class date
{
    int day, month, year, noOfdays;

public:
    date(int Aday, int Amonth, int Ayear)
    {
        day = Aday;
        month = Amonth;
        year = Ayear;
        noOfdays = day + ((month - 1) * 30);
    }

    date operator<(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) < (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator>(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) > (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator>=(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) > (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)) || (noOfdays + ((year - 1) * 365)) == (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator<=(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) < (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)) || (noOfdays + ((year - 1) * 365)) == (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator==(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) == (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator!=(date &Obj2)
    {
        if ((noOfdays + ((year - 1) * 365)) != (Obj2.day + ((Obj2.month - 1) * 30) + ((Obj2.year - 1) * 365)))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    date operator++()
    {
        noOfdays++;
    }

    date operator+(int addDays)
    {
        noOfdays += addDays;
    }

    date operator-(date &Obj2)
    {
        int ans = (noOfdays + (year - 1) * 365) - (Obj2.day + ((Obj2.month - 1) * 30) + (Obj2.year - 1) * 365);
        cout << ans << endl;
    }

    void display()
    {
        cout << noOfdays << endl;
    }
};

int main()
{
    date obj1(25, 8, 2002);
    date obj2(23, 6, 2002);
    obj1 - obj2;
    return 0;
}