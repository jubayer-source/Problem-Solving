#include <iostream>
#include <iomanip> // this headerfilee for setprecision 
using namespace std;

int main()
{
    double R;
    cin >> R;

    double area = 3.141592653 * R * R;
    cout << fixed <<setprecision(9);

    cout << area;


    return 0;
}
