#include"customer.h"
#include<iostream>
using namespace std;

Customer::Customer(){
    name="";
    address="";
    phoneNum="";
    email="";
}
Customer::Customer(string n, string a, string pN, string e){
    name=n;
    address=a;
    phoneNum=pN;
    email=e;
}
void Customer::set_name(string n){name=n;}
void Customer::set_address(string a){address=a;}
void Customer::set_phoneNum(string p){phoneNum=p;}
string Customer::get_name() const {return name;}
string Customer::get_address() const {return address;}
string Customer::get_phoneNum() const {return phoneNum;}
void Customer::Register(){
    string a,b,c,d;
    cout<<"Enter information: name, email, address, and phone number:\n";
    cin>>a>>b>>c>>d;
    this->set_name(a);this->set_email(b);this->set_address(c);this->set_phoneNum(d);
}
void Customer::searchName(string name){
    for(vector<Product>::iterator it=Seller::products.begin();it!=Seller::products.end();it++){
        if((*it).get_name()==name) cout<<(*it).get_name()<<endl;
    }
}
void Customer::searchCategory(string category){
    for(vector<Product>::iterator it=Seller::products.begin();it!=Seller::products.end();it++){
        if((*it).get_category()==category) cout<<(*it).get_name()<<endl;
    }
}
void Customer::Addproduct(Product p){
    int q;
    cout<<"Please enter the required quantity!\n";
    cin>>q;
    p.set_quantity(q);
    cart.push_back(p);
    for(vector<Product>::iterator it=Seller::products.begin();it!=Seller::products.end();it++){
        cout<<(*it).get_name()<<endl;
    }
}
void Customer::confirmReceipt(){
    int totalp=0;
    for(vector<Product>::iterator it=Seller::products.begin();it!=Seller::products.end();it++){
        totalp=totalp+(((*it).get_price())*((*it).get_quantity()));
    }
}