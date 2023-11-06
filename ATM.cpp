#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int a[10] = {1300, 14300, 8790, 56780, 34500, 2300, 800, 75000, 12800, 31500};
    char choice;

    int menu;
    cout << "Enter the number to entering menu categories: " << endl;
    cout << "Your menu : " << endl;
    do
    {
        cout << "1. Show all account." << endl;
        cout << "2. Check Balance." << endl;
        cout << "3. Withdraw ammount." << endl;
        cout << "4. Deposite ammount." << endl;
        cout << "5. Exit." << endl;
        cout << endl;

        cout << "Enter the menu : ";
        cin >> menu;
        cout << endl;

        if (menu == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << "Account " << i + 1 << " : Balance = " << a[i] << " RS" << endl;
            }
        }

        if (menu == 2)
        {
            cout << "Enter account number : ";
            cin >> i;
            cout << "Account " << i << " : Balance = " << a[i - 1] << " RS" << endl;
        }
        if (menu == 3)
        {
            int amount = 0;
            cout << "Enter account number : " << endl;
            cin >> i;
            cout << "Enter the amount to withdraw : " << endl;
            cin >> amount;
            if (amount <= a[i - 1])
            {
                a[i - 1] -= amount;
                cout << "New ammount in account number " << i << " is " << a[i - 1] << endl;
            }
            else
            {
                cout << "Error: Insufficient balance." << endl;
            }
        }
        if (menu == 4)
        {
            int amount;
            cout << "Enter the account number : ";
            cin >> i;
            cout << "Enter the amount to deposite : ";
            cin >> amount;
            a[i - 1] += amount;
            cout << "Deposite Successfully. Your new amount is : " << a[i - 1] << " Rs" << endl;
        }

        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "Thank you for using our ATM. Have a great day." << endl;
}