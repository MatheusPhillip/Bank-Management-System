#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class bank {
    
    char name[100], address[100], account_type;
    float balance;

    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();
};


void bank::open_account() {

    cout << "Enter your full name: " << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your address: " << endl;
    //cin.ignore();
    cin.getline(address, 100);
    cout << "What type of account you want to open?" << endl;
    cout << "Saving - s" << endl;
    cout << "Currunt - c" << endl;
    cin >> account_type;
    cout << "Enter amount for deposite: " << endl;
    cin >> balance;
    cout << "Your account is created" << endl;

}

void bank ::deposite_money() {
    float amount;
    cout << "Enter how much you want to deposite: " << endl;
    cin >> amount;
    balance = balance + amount;
    cout << "Your new amount is: " << balance << endl;

}

void bank::withdraw_money() {
    float amount = 0;
    cout << "Your amount: " << balance << endl;
    do {
        cout << "Enter how much you want to withdraw: " << endl;
        cin >> amount;
        balance = balance - amount;
    } while (amount > balance);
    cout << "Your new amount is: " << balance << endl;
}

void bank::display_account() {
    cout << "Your full name: " << name << endl;
    cout << "Your address: " << address << endl;
    cout << "Your amount: " << balance << endl;
    cout << "Type of account: " << account_type << endl;

}


int main()
{
    int option;
    bank obj;
    do {
        cout << "1) Open Account" << endl;
        cout << "2) Deposite Money" << endl;
        cout << "3) Withdraw Money" << endl;
        cout << "4) Display Account" << endl;
        cout << "5) Exit" << endl;
        cout << "Please, select one option" << endl;
        cin >> option;

        switch (option) {
        case 1: cout << "Open Account" << endl;
            obj.open_account();
            break;
        case 2: cout << "Deposite Money" << endl;
            obj.deposite_money();
            break;
        case 3: cout << "Withdraw Money" << endl;
            obj.withdraw_money();
            break;
        case 4: cout << "Display Account" << endl;
            obj.display_account();
            break;
        case 5:
            exit(1);
        default: cout << "Select an available option only" << endl;
            break;
        }
    } while (option != 5);
  


    return 0;
}


