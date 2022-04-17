// Practicing Vector using Class Template

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Vector
{
private:
    vector<T> v;

public:
    void initialze()
    {
        int n, element;
        cout << "Enter no of elements: ";
        cin >> n;
        cout << "ELement to Add: ";
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            v.push_back(element);
        }
    }
    void findSmall()
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = 0; j < v.size() - i - 1; j++)
            {
                if (v[j] > v[j + 1])
                {
                    T temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
        cout << "The Smallest Element in Vector: " << v[0] << endl;
    }
    T search(T key)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == key)
            {
                return 1;
            }
        }
        return -1;
    }

    void average()
    {
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
        int average = sum / v.size();
        cout << "Average: " << average << endl;
    }
};

int main()
{
    Vector<int> vec1;
    vec1.initialze();
    vec1.findSmall();
    if (vec1.search(6) == 1)
    {
        cout << "Element found." << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    vec1.average();

    return 0;
}
