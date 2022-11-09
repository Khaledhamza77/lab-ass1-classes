#include"seller.h"
#include<iostream>
using namespace std;

Seller::Seller() {name="";email="";}
Seller::Seller(string n, string e) {name=n;email=e;}
void Seller::set_name(string n) {name=n;}
void Seller::set_email(string e) {email=e;}
string Seller::get_name() const {return name;}
string Seller::get_email() const {return email;}
void Seller::Register() {
    string a,b;
    cout<<"Enter information: name, email, address, and phone number:\n";
    cin>>a>>b;
    this->set_name(a);this->set_email(b);
}
void Seller::add_Products(int quantity, int price, string name, string category){
    Product p(name, category, price, quantity);
    products.push_back(p);
}