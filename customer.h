#ifndef _Customer_
#define _Customer_
#include<iostream>
#include<string>
#include<vector>
#include"product.h"
#include"seller.h"
using namespace std;

class Customer: public Seller{
private:
    string name;
    string address;
    string phoneNum;
    string email;
    vector<Product> cart;
public:
    Customer();
    Customer(string n, string a, string pN, string e);
    void set_name(string n);
    void set_address(string a);
    void set_phoneNum(string p);
    void set_email(string e);
    string get_name() const;
    string get_address() const;
    string get_phoneNum() const;
    string get_email() const;
    void Register();
    void searchName(string name);
    void searchCategory(string category);
    void Addproduct(Product p);
    void confirmReceipt();
};
#endif