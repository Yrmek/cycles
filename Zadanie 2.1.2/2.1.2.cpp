#include <iomanip>  
#include <iostream>  // cin cout
using namespace std;

void main()
{
	int  sum {0}, num, k{1};
	double n, buf, Znum, temp;
	cout << "Enter n:" << endl;
	cin >> n;
	cout << "Enter k" << endl;
	cin >> k;
	if ((n <= 0) || (k<=0)) cout << "you have entered incorrect value" << endl;
	else
	{
		buf = modf(n, &Znum);
		num = buf * pow(10,k);
			while (num != 0)
			{
				temp = num % 10;
				num = num / 10;
				sum += temp;
			} 
	}
		cout << "sum=" << sum << endl;
	
		
}