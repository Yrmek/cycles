#include <iomanip>  
#include <iostream>  // cin cout
#include <math.h>

using namespace std;

void main()
{
	int k;
	double  jnk, n, buf;
	cout << "Enter n:" << endl;
	cin >> n;
	buf = modf(n, &jnk);
	cout << "buf=" << buf;

}