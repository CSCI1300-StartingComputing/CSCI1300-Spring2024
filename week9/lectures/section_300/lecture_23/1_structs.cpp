// CSCI 1300, Spring 2024
// Supriya Naidu
// Lecture 23: working with structs

#include<iostream>

using namespace std;

// define structs outside of main -> global scope
// struct -> create our own data type
// UpperCamelCase
struct Product
{
    // data members/attribute inside the {} // as many data menber as you like to
    string name;
    double price;
    string category;
};

void printProducts(Product p) // print pen, apple ....any Product object
{
    cout << "=====================PRODUCT INFO======================"<< endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Category: " << p.category <<endl;
    cout << "=======================================================" << endl;
    p.price = 1000.34;
    return;
}

Product inflationUpdate(Product p)
{
    p.price = p.price * 1.2; 
    return p; // return the object as we have updated value of its price attribute
}

int main()
{
    // int arr[4]; // 4 integers
    // string arr1[4];
    // double -> price, string -> color, string -> transportation .....

    // cereal, pen, computer, shoes, car > product/item
    // price, color, inanimate, category

    Product pen; // declare a struct object -> int x;
    cout << pen.name << endl; // returns the information stored for the name data member in the pen object
    cout << pen.price << endl;
    cout << pen.category << endl;

    // initialize the attributes in the pen object
    // approach 1
    pen.name = "pen";
    pen.price = 1.99;
    pen.category = "school supplies";

    cout << pen.name << endl; 
    cout << pen.price << endl;
    cout << pen.category << endl;

    // approach 2 -> int y = 10; -> declare and initialize
    Product apple = {"Gala Apple", 2.99, "Fruit"};  // match the order in the definition

    // cout << apple.name << endl;

    printProducts(apple);
    printProducts(pen);

    // copy -> = operator
    // copies the data for all attributes
    Product apple1 = apple;
    printProducts(apple1);

    apple1 = pen;
    printProducts(apple1);
    apple1.name = "Pink lady";
    printProducts(apple1);
    cout << "after function call that updtes price" << endl;
    cout << apple1.price << endl;

    // comparison -> == not allowed
    // need to compare each individual attribute in both struct objects
    // create a function to compare objects of the same struct type
    // bool checkProductEquals(Product p1, Product p2)
    // {
    //     if(apple.name == apple1.name && apple.price == apple1.price && ....)
    // }

    // a function that returns a struct
    apple1 = inflationUpdate(apple1);
    // capture the return in the same object sent as argument
    printProducts(apple1);

    // an array of struct objects
    int arr[2] = {1, -2};

    Product fruits[3];
    Product school_supplies[10] = {pen};

    arr[0] = 10;

    fruits[0] = apple;
    // apple.name
    cout << fruits[0].name << endl;
    

    return 0;
}