#include<iostream>
using namespace std;

class Employees{
    string Emp_name;
    int Account_no;
    float Balance;
    int withdraw, deposit;

public:
    void getDetails(){
        cout<<"To get Bank Details";
        cout<<endl<<"Enter Employee Name: ";
        cin>>Emp_name;
        cout<<"Enter Account Number: ";
        cin>>Account_no;
        cout<<"Enter the Balance: ";
        cin>>Balance;
        cout<<endl;
    }

    void Withdraw(){
        cout<<"\nWithdraw History";
        cout<<endl<<"Enter the amount to withdraw: ";
        cin>>withdraw;
        if(withdraw>Balance){
            cout<<"Insufficient Balance!!";
        }
        else{
            Balance = Balance - withdraw;
            cout<<"Balance: "<<Balance;
        }
        cout<<endl;
    }

    void Deposit(){
        cout<<endl<<"Deposit History";
        cout<<endl<<"Enter the amount to Deposit: ";
        cin>>deposit;
        Balance = Balance + deposit;
        cout<<"Balance: "<<Balance;
        cout<<endl;
    }

    void display(){
        cout<<endl<<"Total Balance = "<<Balance;
    }
};

int main(){
    Employees e;
    e.getDetails();
    e.Withdraw();
    e.Deposit();
    e.display();
    return 0;
}
