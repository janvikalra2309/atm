#include<iostream>
using namespace std;

class bank
{
    public:
    char name[20];
    long accnumber;
    double withdrawal_ammount;
    double balance;
    public:
    void initialise()
    {
        cout<<"enter your name:"<<endl;
        gets(name);
        cout<<"enter your bank account number"<<endl;
        cin>>accnumber;
       // cout<<"enter your withdrawal amount"<<endl;
       // cin>>withdrawal_amount;
        cout<<"enter your balance"<<endl;
        cin>>balance;
    }
    void deposit()
    {
        int des;
        cout<<"enter the amount to deposit"<<endl;
        cin>>des;
        balance+=des;
        cout<<"new balance ="<<balance<<endl;
        
    }
    void withdraw()
    {
        int withdraw;
        cout<<"enter the amount to be withdraw"<<endl;
        cin>>withdraw;
       // balance-=withdraw;
        //cout<<"amount after withdrawal is:"<<balance<<endl;
        if(withdraw>balance)
        {
            cout<<"insufficent balance";
        }
        else
        {
            balance-=withdraw;
        cout<<"amount after withdrawal is:"<<balance<<endl;
        }
    }
    void display()
    {
        cout<<name<<endl;
        cout<<balance<<endl;
    }
};
int main()
{
     bank b1;
     b1.initialise();
     b1.deposit();
     b1.withdraw();
     b1.display();
     return 0;
}