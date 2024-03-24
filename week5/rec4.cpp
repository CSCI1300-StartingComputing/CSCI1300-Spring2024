#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Function to determine the color associated with their birth month
 * @param birthMonth of the user
 * @return string - color associated with their birth month
 */
string getColor(int birthMonth)
{
    // Check the birth month and return the corresponding color
    if (birthMonth >= 1 && birthMonth <= 3)
    {
        return "green";
    }
    else if (birthMonth >= 4 && birthMonth <= 6)
    {
        return "red";
    }
    else if (birthMonth >= 7 && birthMonth <= 9)
    {
        return "orange";
    }
    else if (birthMonth >= 10 && birthMonth <= 12)
    {
        return "blue";
    }
    else
    {
        return "";
    }
}

/**
 * @brief Function to calculate the area of the coaster based on shape(square or circle)
 * @param shape of the coaster that user specified
 * @param size of the coaster, which is either the side length (for a square) or the radius (for a circle)
 * @return double - area of the coaster based on the shape
 */
double getArea(string shape, double size)
{
    const double pi = 3.14159;
    if (shape == "square")
    {
        return size * size;
    }
    else if (shape == "circle")
    {
        return pi * size * size;
    }
    else
    {
        return 0.0;
    }
}

/**
 * @brief Function to calculate the price of the coaster based on area and color, where each color has a specific cost associated with it
 * @param area of the coaster
 * @param color of the coaster
 * @return double - price of the coaster based on area and color
 */
double getPrice(double area, string color)
{
    double cost = 0.0;
    if (color == "green")
    {
        cost = 4;
    }
    else if (color == "red")
    {
        cost = 3;
    }
    else if (color == "orange")
    {
        cost = 2;
    }
    else if (color == "blue")
    {
        cost = 1;
    }
    return area * cost;
}

int main()
{
    int birthMonth;
    string shape;
    double length;
    double radius;
    double area = 0;

    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;

    cout << "Enter the shape of the coaster (square or circle): ";
    cin >> shape;
    if (shape == "square")
    {
        // If the shape is square, prompt for its length
        cout << "Enter the length of the square: ";
        cin >> length;
        area = getArea(shape, length);
    }
    else if (shape == "circle")
    {
        // If the shape is a circle, prompt for its radius
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = getArea(shape, radius);
    }

    // Get the color associated with the user's birth month
    string color = getColor(birthMonth);

    // Get the price of the coaster
    double price = getPrice(area, color);

    cout << "You will receive a " << color << " color coaster with a price of $" << price << "." << endl;

    return 0;
}
