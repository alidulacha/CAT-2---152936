#include <iostream>
using namespace std;

int main(){
    int opt;
    string name, password;
    cout<<"This is the login page";
    cout<<" Username: ";
    getline(cin, name);
    cout<<"Password: ";
    getline(cin,password);
    if (name =="User" && password == "123"){
        cout<<"Login Successful";
    }
    else{
        cout<<"Login Unsuccessful";
    }
    cout<<"\n1. About us Page \n2. Services Page \n3.Profile page\n4. Logout"<<endl<<endl;
    cout<<"Please select one (1,2,3 etc....) "<<endl;
    cin>>opt;

    switch(opt){
        case 1: 
        cout<<"My name is Ali"<<endl;
        break;
    case 2:
    cout<<"I am a video editor"<<endl;
    break;
    case 3: 
    cout<<"I am Ali Dulacha, 2005, Kenya, Kenya, Nairobi, Strathmore, DBIT, Intro to programming"<<endl;
    break;
    case 4:
    cout<<"Enter username: "<<endl;
    getline(cin,name);
    cout<<"Enter Password: "<<endl;
    getline(cin,password);
    cout<<"Logout successful";
    }
    return 0;
}