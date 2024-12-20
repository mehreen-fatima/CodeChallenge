#include<iostream>
using namespace std;

class BankAccount{

    private:
    int accountNumber;
    int balance=0;
    public:

    //setters

    void setBalance(int b){
        balance=b;
    }
    void setAccountNumber(int a){
        accountNumber=a;
    }
    //getters

    int getBalance(){
        return balance;
    }
    int getAccountNumber(){
        return accountNumber;
    }
    //class methods
    void deposit(int dep){
        
        balance=dep+balance;
        cout<<"you deposited money successfully"<<endl;
    }
    void withdrawl(int wid){
        if (balance>=wid){
        balance=balance-wid;
        cout<<"you withdraw money successfully"<<endl;
        }else{
            cout<<"not enough balance"<<endl;
        }

    }

    void balance_inquiry(){
        cout<<"your balance is :"<<balance<<"$"<<endl;
    }
};

int main(){
    BankAccount user1;
    user1.setAccountNumber(123456678);
    user1.setBalance(2385);
    char t;
    do{
        cout<<"Askari Bank ltd"<<endl;
        cout<<"select option"<<endl<<"1. deposit money \n2. withdraw money \n3. balance inquairy \n4. exit \n";
        int op;
        cin>>op;
        switch (op)
        {
        case 1:
            cout<<"your account number is "<<user1.getAccountNumber()<<endl;
            cout<<"enter deposite amount:"<<endl;
            
            int dep_amount;
            cin>>dep_amount;
            user1.deposit(dep_amount);
            break;
        
        case 2:
            cout<<"your account number is "<<user1.getAccountNumber()<<endl;
            cout<<"enter withdraw money:"<<endl;
            int wid_amount;
            cin>>wid_amount;
            user1.withdrawl(wid_amount);
            break;
        case 3:
            user1.balance_inquiry();
            cout<<"your account number is "<<user1.getAccountNumber()<<endl;
            break;
        case 4:
            cout<<"thanks for using our services\n";
            break;
        default:
            cout<<"invalid input!!!\n";
            break;
        }
        cout<<"if you want to see menu again press (y) else press any button"<<endl;
        cin>>t;
    }while(t=='y');
    return 0;
}