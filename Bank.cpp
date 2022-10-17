/*Create a class to represent a bank account, include the following members: 
1. Data members: 
     i. Name of the depositor 
     ii. Account number
 2. Member functions 
     i. Deposit an amount 
     ii. Withdraw an amount 
     iii. Display name and balance
*/

//Title-Bank Application
//Author-Arpit Bansal,2213502,N div
//Date-26/04/22

#include <iostream>
using namespace std;
class bank{
    private:
        string cname;
        long int acc_no; 
        double balance;
    public:
        void init();
        void deposit();
        void withdraw();
        void display();    
}b;
int main(){
    b.init();
    int i;
    cout<<"\n\tHow can we help u";
    cout<<"\nEnter 1 for Deposit";
    cout<<"\nEnter 2 for Withdraw";
    cout<<"\nEnter 3 for Display Balance";
    cout<<"\nPlease Enter your Choice: ";
    cin>>i;
    if(i==1){
        b.deposit();
    }
    else if(i==2){
      b.withdraw();
    }
    else if(i==3){
        b.display();
    }
    return 0;
}
void bank ::init(){
    cout<<"\n\n\tEnter Your name: ";
    cin>>cname;
    cout<<"\n\tEnter your account number: ";
    cin>>acc_no;
    cout<<"\n\tEnter your balance: ";
    cin>>balance;
    }

void bank::deposit(){
    float amt;
    cout<<"\n\tYour current balance: "<<balance;
    cout<<"\n\tPlease enter the amount to deposit: ";
    cin>>amt;
    balance+=amt;
    cout<<"\n\tYou updated balance: "<<balance;
}
void bank::withdraw(){
    float amt;
    cout<<"\n\tYour current balance: "<<balance;
    cout<<"\n\tPlease enter the amount to withdraw: ";
    cin>>amt;
    if(balance>amt){
        balance-=amt;
        cout<<"\n\tYou updated balance: "<<balance;
    }
    else{
        cout<<"\n\tNot enough funds";
    }
}
void bank::display(){
    cout<<"\n\tName: "<<cname;
    cout<<"\n\tAccount no: "<< acc_no;
    cout<<"\n\tCurrent Balance: "<<balance<<endl;
}