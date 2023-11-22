#include <iomanip>  
#include <iostream>// cin cout
#include <cmath>
using namespace std;

int main()
{
	double  y ,xn = 1 , deltax = 0.1;
	int i=0, count=0;
	int e = pow(10, -6);
	
		for (double x0 = -0.8; (x0 + i * deltax) <= xn; i++)
		{
			double xi = x0 + i * deltax;
			y = log(1 - xi);
			cout << "y=" << y << endl;
			double sum = 0;
			int k = 1;
			do
			{
				sum =sum - pow(xi, k) / k ;
				k++;
				count++;
			} 
			while (int(sum*pow(10,6)) !=int ((y - e)*pow(10,6))|| int(sum * pow(10, 6)) != int((y + e) * pow(10, 6)));
			cout << "sum=" << sum << " ";
			cout << "count=" << count << endl;
		}

}