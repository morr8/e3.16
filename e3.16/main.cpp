/*
 •• E3.16
 Unit conversion. Write a unit conversion program that asks the users from which unit they want to convert (fl. oz, gal, oz, lb, in, ft, mi) and to which unit they want to convert (ml, l, g, kg, mm, cm, m, km). Reject incompatible conversions (such as gal ➔ km). Ask for the value to be converted, then display the result:
 
 Convert from? gal
 Convert to? ml
 Value? 2.5
 2.5 gal = 9462.5 ml
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Convert from? ";
    string first_unit, second_unit;
    cin >> first_unit;
    cout << "Convert to? ";
    cin >> second_unit;
    cout << "Value? ";
    float value;
    cin >> value;
    
    if (first_unit == "fl" && (second_unit == "gal" || second_unit == "l" || second_unit == "ml"))
    {
        if (second_unit == "gal")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0078125 << " " << second_unit;
        }
        else if (second_unit == "l")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0295735 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 29.5735 << " " << second_unit;
        }
    }
    else if (first_unit == "gal" && (second_unit == "fl" || second_unit == "l" || second_unit == "ml"))
    {
        if (second_unit == "fl")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 128 << " " << second_unit;
        }
        else if (second_unit == "l")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 3.785411784 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.033814 << " " << second_unit;
        }
    }
    else if (first_unit == "ml" && (second_unit == "gal" || second_unit == "l" || second_unit == "fl"))
    {
        if (second_unit == "fl")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0338 << " " << second_unit;
        }
        else if (second_unit == "l")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.001 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.000264 << " " << second_unit;
        }
    }
    else if (first_unit == "l" && (second_unit == "gal" || second_unit == "ml" || second_unit == "fl"))
    {
        if (second_unit == "fl")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 33.814 << " " << second_unit;
        }
        else if (second_unit == "ml")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1000 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.264 << " " << second_unit;
        }
    }
    else if (first_unit == "oz" && (second_unit == "lb" || second_unit == "kg" || second_unit == "g"))
    {
        if (second_unit == "lb")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0625 << " " << second_unit;
        }
        else if (second_unit == "kg")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0283495231 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 28.349523125 << " " << second_unit;
        }
    }
    else if (first_unit == "kg" && (second_unit == "lb" || second_unit == "oz" || second_unit == "g"))
    {
        if (second_unit == "lb")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 2.205 << " " << second_unit;
        }
        else if (second_unit == "oz")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 35.274 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1000 << " " << second_unit;
        }
    }
    else if (first_unit == "lb" && (second_unit == "kg" || second_unit == "g" || second_unit == "oz"))
    {
        if (second_unit == "kg")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.45359237 << " " << second_unit;
        }
        else if (second_unit == "g")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 453.59237 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 16 << " " << second_unit;
        }
    }
    else if (first_unit == "g" && (second_unit == "kg" || second_unit == "lb" || second_unit == "oz"))
    {
        if (second_unit == "kg")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.001 << " " << second_unit;
        }
        else if (second_unit == "lb")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0022 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0353 << " " << second_unit;
        }
    }
    else if (first_unit == "in" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0833333333 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0000157828 << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 25.4 << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0000254 << " " << second_unit;
        }
        else if (second_unit == "cm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 2.54 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0254 << " " << second_unit;
        }
    }
    else if (first_unit == "ft" && (second_unit == "in" || second_unit == "mi" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
        cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 12 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0001893939 << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 304.8 << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0003048 << " " << second_unit;
        }
        else if (second_unit == "cm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 30.48 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.3048 << " " << second_unit;
        }
        
    }
    else if (first_unit == "mi" && (second_unit == "in" || second_unit == "ft" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 63360 << " " << second_unit;
        }
        else if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 5280 << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1609344 << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1.609344 << " " << second_unit;
        }
        else if (second_unit == "cm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 160934.4 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1609.344 << " " << second_unit;
        }
    }
    else if (first_unit == "mm" && (second_unit == "in" || second_unit == "ft" || second_unit == "mi" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0394 << " " << second_unit;
        }
        else if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0394 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * pow(10, -7) << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1 * pow(10, -6) << " " << second_unit;
        }
        else if (second_unit == "cm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.1 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.001 << " " << second_unit;
        }
    }
    else if (first_unit == "km" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 3280.84 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.621371 << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1000000 << " " << second_unit;
        }
        else if (second_unit == "in")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 39370.1 << " " << second_unit;
        }
        else if (second_unit == "cm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 100000 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1000 << " " << second_unit;
        }
    }
    else if (first_unit == "cm" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "km" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.0328084 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * pow(6.21371, -6) << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 10 << " " << second_unit;
        }
        else if (second_unit == "in")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.393701 << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * pow(1, -5) << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.01 << " " << second_unit;
        }
    }
    else if (first_unit == "m" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "km" || second_unit == "cm"))
    {
        if (second_unit == "ft")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 3.28084 << " " << second_unit;
        }
        else if (second_unit == "mi")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.000621371 << " " << second_unit;
        }
        else if (second_unit == "mm")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 1000 << " " << second_unit;
        }
        else if (second_unit == "in")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 39.3701 << " " << second_unit;
        }
        else if (second_unit == "km")
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 0.001 << " " << second_unit;
        }
        else
        {
            cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value * 100 << " " << second_unit;
        }
    }
    else
    {
        cout << "incompatible units";
    }
    cout << endl;
}
