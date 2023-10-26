#include<iostream>
using namespace std;
class bank_account{
    public:
    string name;
    int acc_no;
    int with_amt;
    int bl;
    int depo;
    
    bank_account(){
        name=" ";
        acc_no=-1;
        with_amt=-1;
        bl=-1;
        depo=-1;

    }
    void create();

    void balance();

    void deposite();
    void withdrawal();

};
void bank_account::create(){
    cout<<"Enter Name : "<<endl;
    cin>>name;
    cout<<"Enter account no : "<<endl;
    cin>>acc_no;
    cout<<"Enter intial balance : "<<endl;
    cin>>bl;
}
void bank_account::balance(){
    cout<<""<<name<<"   "<<acc_no<<"   "<<bl<<endl;

    
}




void bank_account::deposite(){
     cout<<"Enter the amount you want to deposite : "<<endl;
     cin>>depo;
     bl=bl+depo;


}
void bank_account::withdrawal(){
    cout<<"Enter the amount you want to withdraw : "<<endl;
    cin>>with_amt;
    bl=bl-with_amt;


}
 
int main(){
    int a;
    cout<<"Enter the no of account you want to create in bank :"<<endl;
    cin>>a;
    bank_account b[a];
    for(int i=0;i<a;i++){
        b[i].create();
    } 
    cout<<"Displaying the acvount details you have entered : "<<endl;
     cout<<"sr_no   Name   Acc_no   balance "<<endl;
    for(int i=0;i<a;i++){
        
        cout<<i+1<<"   ";
        b[i].balance();
    }
    cout<<"if you want to make changes in your account, follow yhe following procedure :"<<endl;
    int c;
    cout<<"Enter your account no: "<<endl;
    cin>>c;
    for(int i=0;i<a;i++){
        if(c==b[i].acc_no){
            cout<<"your account no matched successfully."<<endl;
            int n;
            cout<<"press 1 for depositing Money :"<<endl;
            cout<<"Press 2 for withdrawing money :"<<endl;
            cin>>n;
            if(n==1){
               
             b[i].deposite();
             


            }
            else{
                
                b[i].withdrawal();

                


            }
      }

    }
     cout<<"Displaying the acvount details you have entered : "<<endl;
     cout<<"sr_no   Name   Acc_no   balance "<<endl;
    for(int i=0;i<a;i++){
        
        cout<<i+1<<"   ";
        b[i].balance();
    }

    return 0;




}
