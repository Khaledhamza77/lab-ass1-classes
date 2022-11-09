#ifndef _Product_
#define _Product_
#include<iostream>
#include<string>
using namespace std;

class Product{
private:
    string name;
    int price;
    string category;
    int quantity;
public:
    Product();
    Product(string n, string c, int p, int q);
    void set_name(string n);
    void set_price(int p);
    void set_category(string c);
    void set_quantity(int q);
    int get_quantity() const;
    string get_category() const;
    int get_price() const;
    string get_name() const;
};
#endif