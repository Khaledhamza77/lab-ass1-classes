#include"product.h"
using namespace std;

Product::Product(){
    price=0;quantity=0;
    name="";category="";
}
Product::Product(string n, string c,int p, int q){
    name=n;category=c;price=p;quantity=q;
}
void Product::set_name(string n){name=n;}
void Product::set_price(int p){price=p;}
void Product::set_category(string c){category=c;}
void Product::set_quantity(int q){quantity=q;}
int Product::get_quantity() const{return quantity;}
string Product::get_category() const{return category;}
int Product::get_price() const{return price;}
string Product::get_name() const{return name;}