/*
Prolog
   a. 	Program Description: 3D functions
   b. 	Author: Brandon Wu
   c. 	Date: 07-11-22
   d. 	Input variables: r, h
   e. 	Process Flow: defining functions, operations
   f. 	Output variables: sphere_vol1, sphere_sa1, cone_vol1, con_sa1, cylinder_vol1, cylinder_sa1
*/

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

double sphere_volume(double r)
{
    double sphere_vol = (4.0 / 3.0) * 3.14 * pow(r, 3);
    return sphere_vol;
}

double sphere_surface(double r)
{
    double sphere_sa = 4.0 * 3.14 * pow(r, 2);
    return sphere_sa;
}

double cylinder_volume(double r, double h)
{
    double cylinder_vol = 3.14 * pow(r, 2) * h;
    return cylinder_vol;
}

double cylinder_surface(double r, double h)
{
    double cylinder_sa = (2.0 * 3.14 * pow(r, 2)) + (2.0 * 3.14 * r * h);
    return cylinder_sa;
}

double cone_volume(double r, double h)
{
    double cone_vol = (1.0 / 3.0) * 3.14 * pow(r, 2) * h;
    return cone_vol;
}

double cone_surface(double r, double h)
{
    double cone_sa = 3.14 * r * (r + pow((pow(h, 2) + pow (r, 2)), 0.5));
    return cone_sa;
}

int main()
{
    double rad;
    double height;
    while (true)
    {
        cout << "What is the radius: ";
        cin >> rad;
        if (cin.fail())
        {
            cout << "Not a valid radius" << endl;
            cin.clear();
            cin.ignore();
        }
        else if (rad < 0)
        {
            cout << "Not a valid radius" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            cout << "What is the height: ";
            cin >> height;
            if (cin.fail())
            {
                cout << "Not a valid height" << endl;
                cin.clear();
                cin.ignore();         
            }
            else if (height < 0)
            {
                cout << "Not a valid height" << endl;
                cin.clear();
                cin.ignore(); 
            }
            else
            {
            double sphere_vol1 = sphere_volume(rad);
            double sphere_sa1 = sphere_surface(rad);
            double cylinder_vol1 = cylinder_volume(rad, height);
            double cylinder_sa1 = cylinder_surface(rad, height);
            double cone_vol1 = cone_volume(rad, height);
            double cone_sa1 = cone_surface(rad, height);
            cout << setw(20) << "Volume";
            cout << setw(20) << "Surface" << endl;
            cout << fixed << setprecision(2) << "Sphere" << setw(14) << sphere_vol1 << setw(20) << sphere_sa1 << endl;
            cout << fixed << setprecision(2) << "Cylinder" << setw(12) << cylinder_vol1 << setw(20) << cylinder_sa1 << endl;
            cout << fixed << setprecision(2) << "Cone" << setw(16) << cone_vol1 << setw(20) << cone_sa1 << endl;
            }
        }
        cout << "Would you like to continue? (y/n): ";
        string ans;
        cin >> ans;
        if (ans != "y")
        {
            cout << "Exit!" << endl;
            break;
        }
    }
    return 0;
}