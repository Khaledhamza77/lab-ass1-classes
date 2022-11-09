#ifndef _Seller_
#define _Seller_
#include<iostream>
#include<string>
#include<vector>
#include"product.h"
using namespace std;

class Seller{
private:
    string name;
    string email;
public:
    vector<Product> products;
    Seller();
    Seller(string n, string e);
    void set_name(string n);
    void set_email(string e);
    string get_name() const;
    string get_email() const;
    void Register();
    void add_Products();
};
#endif