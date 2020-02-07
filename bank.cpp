/*
    TODO:
*/
#include <iostream>
#include <string.h>

using namespace ::std;
const int NAME_LEN = 20;

typedef struct _Account
{
    int id;
    int balance;
    char name[NAME_LEN];
} Account;

Account pArray[100];
int index = 0;

void Printmenu();
void MakeAccount();
void Deposit();
void Withdraw();
void Inquire();
enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

int main(void)
{
    int choice;

    while (1)
    {
        Printmenu();
        cout << "Select : ";
        cin >> choice;

        switch (choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            Deposit();
            break;
        case WITHDRAW:
            Withdraw();
            break;
        case INQUIRE:
            Inquire();
            break;
        case EXIT:
            return 0;
        default:
            cout << "illegal selection" << endl;
            break;
        }
    }
    return 0;
}

void Printmenu()
{
    cout << "--MENU--------" << endl;
    cout << "1. make account" << endl;
    cout << "2. deposit" << endl;
    cout << "3. withdraw" << endl;
    cout << "4. see balance" << endl;
    cout << "5. exit" << endl;
}

void MakeAccount()
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "make account" << endl;
    cout << "ID: ";
    cin >> id;
    cout << "name ";
    cin >> name;
    cout << "deposit amount ";
    cin >> balance;

    pArray[index].id = id;
    pArray[index].balance = balance;
    strcpy(pArray[index].name, name);

    index++;
}

void Deposit()
{
    int money;
    int id;

    cout << " account id: ";
    cin >> id;
    cout << " Deposit amount: ";
    cin >> money;

    for (int i = 0; i < index; i++)
    {
        if (pArray[i].id == id)
        {
            pArray[i].balance += money;
            cout << "--complete--" << endl;
            return;
        }
    }
    cout << "no id" << endl;
}

void Withdraw()
{
    int money;
    int id;

    cout << "account id: ";
    cin >> id;

    cout << "Withdraw amount: ";
    cin >> money;

    for (int i = 0; i < index; i++)
    {
        if (pArray[i].id == id)
        {
            if (pArray[i].balance < money)
            {
                cout << " less than deposit" << endl;
                return;
            }
        }
        pArray[i].balance -= money;
        cout << "--complete--" << endl;
        return;
    }
    cout << "no id" << endl;
}

void Inquire()
{
    for (int i = 0; i < index; i++)
    {
        cout << "account id : " << pArray[i].id << endl;
        cout << "name : " << pArray[i].name << endl;
        cout << "balance : " << pArray[i].balance << endl;
    }
}
