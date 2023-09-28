#include<iostream>
using namespace std;
int main(){

    int CP,SP;
    cout<<"ENTER COST PRICE:"<<endl;
    cin>>CP;
    cout<<"ENTER SELIING PRICE"<<endl;
    cin>>SP;

    if (SP>CP){
        cout<<"PROFIT IS :"<<(SP-CP)<<endl;
    }
    else{
        cout<<"LOSS IS :"<<(CP-SP)<<endl;
    }


    return 0;
}