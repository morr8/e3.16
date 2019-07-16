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
    float value, value2 = 0.0;
    cin >> value;
    
    if (first_unit == "fl" && (second_unit == "gal" || second_unit == "l" || second_unit == "ml"))
    {
        if (second_unit == "gal")
        {
            value2 = value * 0.0078125;
        }
        else if (second_unit == "l")
        {
            value2 = value * 0.0295735;
        }
        else
        {
            value2 = value * 29.5735;
        }
    }
    else if (first_unit == "gal" && (second_unit == "fl" || second_unit == "l" || second_unit == "ml"))
    {
        if (second_unit == "fl")
        {
            value2 = value * 128;
        }
        else if (second_unit == "l")
        {
            value2 = value * 3.785411784;
        }
        else
        {
            value2 = value * 0.033814;
        }
    }
    else if (first_unit == "ml" && (second_unit == "gal" || second_unit == "l" || second_unit == "fl"))
    {
        if (second_unit == "fl")
        {
            value2 = value * 0.0338;
        }
        else if (second_unit == "l")
        {
            value2 = value * 0.001;
        }
        else
        {
            value2 = value * 0.000264;
        }
    }
    else if (first_unit == "l" && (second_unit == "gal" || second_unit == "ml" || second_unit == "fl"))
    {
        if (second_unit == "fl")
        {
            value2 = value * 33.814;
        }
        else if (second_unit == "ml")
        {
            value2 = value * 1000;
        }
        else
        {
            value2 = value * 0.264;
        }
    }
    else if (first_unit == "oz" && (second_unit == "lb" || second_unit == "kg" || second_unit == "g"))
    {
        if (second_unit == "lb")
        {
             value2 = value * 0.0625;
        }
        else if (second_unit == "kg")
        {
             value2 = value * 0.0283495231;
        }
        else
        {
             value2 = value * 28.349523125;
        }
    }
    else if (first_unit == "kg" && (second_unit == "lb" || second_unit == "oz" || second_unit == "g"))
    {
        if (second_unit == "lb")
        {
             value2 = value * 2.205;
        }
        else if (second_unit == "oz")
        {
             value2 = value * 35.274;
        }
        else
        {
             value2 = value * 1000;
        }
    }
    else if (first_unit == "lb" && (second_unit == "kg" || second_unit == "g" || second_unit == "oz"))
    {
        if (second_unit == "kg")
        {
             value2 = value * 0.45359237;
        }
        else if (second_unit == "g")
        {
             value2 = value * 453.59237;
        }
        else
        {
             value2 = value * 16;
        }
    }
    else if (first_unit == "g" && (second_unit == "kg" || second_unit == "lb" || second_unit == "oz"))
    {
        if (second_unit == "kg")
        {
             value2 = value * 0.001;
        }
        else if (second_unit == "lb")
        {
             value2 = value * 0.0022;
        }
        else
        {
             value2 = value * 0.0353;
        }
    }
    else if (first_unit == "in" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
             value2 = value * 0.0833333333;
        }
        else if (second_unit == "mi")
        {
             value2 = value * 0.0000157828;
        }
        else if (second_unit == "mm")
        {
             value2 = value * 25.4;
        }
        else if (second_unit == "km")
        {
             value2 = value * 0.0000254;
        }
        else if (second_unit == "cm")
        {
             value2 = value * 2.54;
        }
        else
        {
             value2 = value * 0.0254;
        }
    }
    else if (first_unit == "ft" && (second_unit == "in" || second_unit == "mi" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
         value2 = value * 12;
        }
        else if (second_unit == "mi")
        {
             value2 = value * 0.0001893939;
        }
        else if (second_unit == "mm")
        {
             value2 = value * 304.8;
        }
        else if (second_unit == "km")
        {
             value2 = value * 0.0003048;
        }
        else if (second_unit == "cm")
        {
             value2 = value * 30.48;
        }
        else
        {
             value2 = value * 0.3048;
        }
        
    }
    else if (first_unit == "mi" && (second_unit == "in" || second_unit == "ft" || second_unit == "mm" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
             value2 = value * 63360;
        }
        else if (second_unit == "ft")
        {
             value2 = value * 5280;
        }
        else if (second_unit == "mm")
        {
             value2 = value * 1609344;
        }
        else if (second_unit == "km")
        {
             value2 = value * 1.609344;
        }
        else if (second_unit == "cm")
        {
             value2 = value * 160934.4;
        }
        else
        {
             value2 = value * 1609.344;
        }
    }
    else if (first_unit == "mm" && (second_unit == "in" || second_unit == "ft" || second_unit == "mi" || second_unit == "km" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "in")
        {
             value2 = value * 0.0394;
        }
        else if (second_unit == "ft")
        {
             value2 = value * 0.0394;
        }
        else if (second_unit == "mi")
        {
             value2 = value * pow(10, -7);
        }
        else if (second_unit == "km")
        {
             value2 = value * 1 * pow(10, -6);
        }
        else if (second_unit == "cm")
        {
             value2 = value * 0.1;
        }
        else
        {
             value2 = value * 0.001;
        }
    }
    else if (first_unit == "km" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "cm" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
             value2 = value * 3280.84;
        }
        else if (second_unit == "mi")
        {
             value2 = value * 0.621371;
        }
        else if (second_unit == "mm")
        {
             value2 = value * 1000000;
        }
        else if (second_unit == "in")
        {
             value2 = value * 39370.1;
        }
        else if (second_unit == "cm")
        {
             value2 = value * 100000;
        }
        else
        {
             value2 = value * 1000;
        }
    }
    else if (first_unit == "cm" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "km" || second_unit == "m"))
    {
        if (second_unit == "ft")
        {
             value2 = value * 0.0328084;
        }
        else if (second_unit == "mi")
        {
             value2 = value * pow(6.21371, -6);
        }
        else if (second_unit == "mm")
        {
             value2 = value * 10;
        }
        else if (second_unit == "in")
        {
             value2 = value * 0.393701;
        }
        else if (second_unit == "km")
        {
             value2 = value * pow(1, -5);
        }
        else
        {
             value2 = value * 0.01;
        }
    }
    else if (first_unit == "m" && (second_unit == "ft" || second_unit == "mi" || second_unit == "mm" || second_unit == "in" || second_unit == "km" || second_unit == "cm"))
    {
        if (second_unit == "ft")
        {
             value2 = value * 3.28084;
        }
        else if (second_unit == "mi")
        {
             value2 = value * 0.000621371;
        }
        else if (second_unit == "mm")
        {
             value2 = value * 1000;
        }
        else if (second_unit == "in")
        {
             value2 = value * 39.3701;
        }
        else if (second_unit == "km")
        {
             value2 = value * 0.001;
        }
        else
        {
             value2 = value * 100;
        }
    }
    else
    {
        cout << "incompatible units";
    }
    cout << value << " " << first_unit << " = " << fixed << setprecision(2) << value2 << " " << second_unit << endl;
}

