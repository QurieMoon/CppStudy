
// implementation of Book.h
#include <iostream>
# include "Book.h"

Book::Book(string name, Author author, double price, int qtyInStock) : name(name), author(author) {
    setPrice(price);
    setQtyInStock(qtyInStock);
}

string Book::getName() const{
    return name;
}

Author Book::getAuthor() const{
    return author;
}

double Book::getPrice() const{
    return price;
}

void Book::setPrice(double price){
    if(price < 0){
        cout << "Invalid price! This price is set to 0 instead" << endl;
        this -> price = 0;
    } else{
        this -> price = price;
    }
}

int Book::getQtyInStock() const{
    return qtyInStock;
}

void Book::setQtyInStock(int qtyInStock){
    if(qtyInStock < 0){
        cout << "Invalid price! The qty is set to 0 instead" << endl;
        this -> qtyInStock = 0;
    }else{
        this -> qtyInStock = qtyInStock;
    }
}

void Book::print() const{
   cout << "'" << name << "' by ";
   author.print();

}

string Book::getAuthorName() const{
    return author.getName();
}