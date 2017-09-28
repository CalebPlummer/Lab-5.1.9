/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on September 25, 2017, 1:31 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class ShopItemOrder{
private:
    string itemName;
    double price;
    unsigned int quantity;
public:
    
    ShopItemOrder(void) 
    {
        
    }
    
    ShopItemOrder(string itemName, double price, unsigned int quantity) 
    {
        this->itemName = itemName;
        this->price = price;
        this->quantity = quantity;
    }
    

    string getItemName(void){return itemName;}
    void setItemName(string name){itemName = name;}
    
    double getPrice(void){return price;}
    void setPrice(double price){price = price;}
    
    int getQuantity(void){return quantity;}
    void setQuantity(unsigned int quantity){quantity = quantity;}
    
};

int main(void) {
    double totalPrice = 0;
    ShopItemOrder item1("Book", 4.99, 2);
    ShopItemOrder item2("Pencil", 1.99, 15);
    ShopItemOrder item3("Binder", 9.99, 5);
    ShopItemOrder vector[] = {item1, item2, item3};
    cout << " Item Name   Quantity   Price" << endl;
    for(ShopItemOrder loop: vector)
    {
        cout << "  " << loop.getItemName();
        cout << "        ";
        cout << loop.getQuantity();
        cout << "        ";
        cout << loop.getPrice() << endl;
        totalPrice += loop.getPrice() * loop.getQuantity();
    }
    cout << endl;
    cout << "Your total is: " << totalPrice;
    cout << endl;
    return 0;
}
