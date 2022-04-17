// Bank Simulation using Sub Classes for specific functions

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string customer_name;
    int acc_no, balance;
    char acc_type; // enter C or S
    int pin;

    void initialize(string c_name, int ac_no, char ac_type, int bal, int epin)
    {
        customer_name = c_name;
        acc_no = ac_no;
        acc_type = ac_type;
        balance = bal;
        pin = epin;
    }

    void deposit(int depo)
    {
        balance += depo;
        cout << "Deposited Balance: " << depo << endl;
        cout << "Balance Updated to: " << balance << endl;
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void widthdrawal(int wamount, int enteredpin)
    {
        if (pin == enteredpin)
        {
            balance -= wamount;
            cout << "Balanced Withdrawl: " << wamount << endl;
            cout << "Updated Balance:  " << balance << endl;
        }
    }
};

class savingAcc : public Account
{
public:
    void interest(double time)
    {
        if (acc_type = 'S')
        {
            double rate = 5;
            cout << "CI for how many years?: ";
            cin >> time;
            int cint = (balance * (pow((1 + rate / 100), time))) - balance;
            balance += cint;
            cout << "Balance updated to: " << balance << endl;
        }
        else
        {
            cout << "Current Account does not provide CI." << endl;
        }
    }
};

class currAcc : public Account
{
public:
    void checkMinBalance()
    {
        if (acc_type = 'C')
        {
            if (balance < 5000)
            {
                cout << "Balance below 5000 \nImposing Service Charge: 500" << endl;
                balance -= 500;
                cout << "New Balance: " << balance << endl;
            }
            else
            {
                cout << "Balance is sufficient" << endl;
            }
        }
        else
        {
            cout << "Saving Acc does not have a minimum acc balance." << endl;
        }
    }
};

int main()
{
    savingAcc acc1;
    acc1.initialize("XYZ", 5413665, 'S', 5000, 2546);
    acc1.display();
    acc1.deposit(100);
    acc1.widthdrawal(2000, 2546);
    acc1.interest(5);

    currAcc acc2;
    acc2.initialize("ABC", 5341685, 'C', 100000, 4578);
    acc2.display();
    acc2.deposit(10000);
    acc2.widthdrawal(15000, 4578);
    acc2.checkMinBalance();
    return 0;
}