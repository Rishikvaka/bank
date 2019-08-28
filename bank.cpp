#include<iostream>
using namespace std;
class bankac
{
	public:
    char name[10];
    int  accountnumber;
    char type[10];
    int balance;
    void depositamount(void);
    void withdraw(void);
    void detailsput(void);
}account;
int main()
{
	char sd={'r'};
	char hi={'s'};
	account.name[10]=sd;
    account.accountnumber=121;
    account.type[10]=hi;
    account.balance=20000;
    int n;
    int pin=1234;
    int h,k=0;
    cout<<"enter the pin";
    cin>>h;
    if(pin==h)
    {
    while(k==0)
    {
    cout<<"select the follwing"<<endl<<"1.deposit"<<"\t"<<"2.withdraw"<<endl<<"3.cheak balance"<<"\t"<<"4.exit";
    cin>>n;
    switch(n)
    
        {
            case 1:
        {
            account.depositamount();
            break;
        }
        case 2:
        {
            account.withdraw();
            break;
        }
            case 3:
        {
            account.detailsput();
            break;
        }
            case 4:
        {
            cout<<"your transcation is over "<<endl<<"\t"<<"thank you "<<endl;
            exit(1);
        }
            defalut :
            cout<<"wrong choice";
            
        }
    
    }
}
else{
	cout<<"pin error";
}
}

void bankac::depositamount()
{
    int n;
    cout<<"enter amount to deposit";
    cin>>n;
    balance=balance+n;
    cout<<"balance is :"<<balance<<endl;
}
void bankac::withdraw()
{
    int n;
    cout<<"enter the amount";
    cin>>n;
    if(n>balance)
    {
        cout<<"insuffient balance";
    }
    else
    {
    balance=balance-n;
    cout<<"balance is :"<<balance<<endl;
    }
    
}
void bankac::detailsput()
{
    cout<<"name     :"<<name;
    cout<<"balance  :"<<balance<<endl;
    cout<<"enter 2 to withdraw";
    int k;
    cin>>k;
    if(k==2)
    {
        account.withdraw();
    }
}
