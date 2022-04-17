// Voting Simulation

#include <iostream>
using namespace std;

int main()
{
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int spoilcount = 0;

    int vote[100];

    int inp = 1;
    while (inp >= 0)
    {
        cout << "VOTE: ";
        cin >> vote[o];
        inp = vote[o];
        o++;
    }

    for (int i = 0; i < o - 1; i++)
    {
        switch (vote[i])
        {
        case 1:
            j++;
            break;
        case 2:
            k++;
            break;
        case 3:
            l++;
            break;
        case 4:
            m++;
            break;
        case 5:
            n++;
            break;
        default:
            spoilcount++;
            break;
        }
    }

    cout << "Candidate 1: " << j << endl;
    cout << "Candidate 2: " << k << endl;
    cout << "Candidate 3: " << l << endl;
    cout << "Candidate 4: " << m << endl;
    cout << "Candidate 5: " << n << endl;
    cout << "SpoiledCount: " << spoilcount << endl;
    return 0;
}