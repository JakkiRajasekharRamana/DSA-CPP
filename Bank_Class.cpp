#include <bits/stdc++.h>

using namespace std;

class BankAccount {
private:
    int account_number,balance;
    string account_name,bank_name,branch_name;
public:

    BankAccount(){
        balance=0;
    }

    BankAccount(int an,string aname,string bn,string brn){
        account_number=an;
        account_name=aname;
        bank_name=bn;
        branch_name=brn;
        balance=0;
    }

    void Deposit(int x){
        balance=balance+x;
        cout<<x<<" Amount Successfully deposited\n";
    }

    void Withdraw(int y){
        if(y>balance){
            cout<<"ERROR! Withdraw amount exceeds the available balance!!\n";
        }
        else{
            balance=balance-y;
            cout<<y<<" Amount Sucessfully Withdrawn\n";
        }
    }

    int ShowBalance(){
        return balance;
    }
};

int main(){
    cout<<"ENter no of customers:\n";
    int n;
    cin>>n;
    BankAccount Customers[n];

    Customers[0]=BankAccount(1,"Raj","Kotak","Hyd");

    Customers[0].Deposit(1200);
    Customers[0].Withdraw(200);
    cout <<"Available Balance:"<<Customers[0].ShowBalance();



}

