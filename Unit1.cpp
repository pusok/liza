      //---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <cmath>
 
int main()
{
    double R;
     std::cout << "R=";
    std::cin >> R;
 
    double S, L, V;
 
    if (R < 0)
        std::cout << "Error!";
 else
    {
        L = 2 * M_PI * R;
        S = M_PI * R * R;
        V = 4.0/3 * M_PI * R * R * R;

        std::cout << "L = " << L << std::endl;
        std::cout << "S = " << S << std::endl;
        std::cout << "V = " << V << std::endl;
    }


system("PAUSE");
return 0;    }
