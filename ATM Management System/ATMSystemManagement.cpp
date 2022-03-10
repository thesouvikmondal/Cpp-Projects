#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
void showmenu(){
    cout<<"********************* MENU *********************"<<endl;
    cout<<"1. Check balance "<<endl;
    cout<<"2. Deposite "<<endl;
    cout<<"3. Withdraw "<<endl;
    cout<<"4. Transfer to Another Acoount "<<endl;
    cout<<"5. Check The other One's Balance "<<endl;
    cout<<"6. Exit "<<endl;
    cout<<"************************************************"<<endl;
}
int main(){
    double balance = 4000;
    int option;
    showmenu();
    cout<<"Please Enter Any Option:  ";
    cin>>option;
    system("cls");
do{
    switch (option){

        case 1:
            cout<<"your current Balance is:  Rs"<<balance<<endl;
            break;       
        case 2:
            cout<<"Enter The Deposite Amount:  ";
            double depositeAmount;
            cin>>depositeAmount;
            balance += depositeAmount;
            cout<<"Your balance is added"<<endl;
            cout<<"Your Current Balance is:  Rs"<<balance<<endl;
            break;    
        case 3:
            cout<<"Enter The Withdraw Amount:  ";
            double withdrawAmount;
            cin>>withdrawAmount;
                if(withdrawAmount<=balance){
                balance -= withdrawAmount;
                }
                else{
                    cout<<"Insufficient Balance"<<endl;
                }
            break; 
        case 4:
            cout<<"Enter the Reciver's Account No:  ";
            double balance2;
            int reciverAccountNo;
            cin>>reciverAccountNo;
            cout<<endl;
             double transferAmount;
            cout<<"Enter The Amount:  ";
            cin>>transferAmount;
            if(balance>=transferAmount){
                balance2+=transferAmount;
                balance-=transferAmount;
                cout<<"Your Current Balance:  "<<balance<<endl;
            }
            else{
                cout<<"Insufficent Balance"<<endl;
            } 
            break;       
        case 5:
            cout<<"Reciver's current Balance is:  Rs"<<balance2<<endl;
            break;    
    }
    showmenu();
    cin>>option;
} 
while (option != 6);
   
    cout<<"Thank You For Using";
}