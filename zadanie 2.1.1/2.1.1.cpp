#include <iomanip>  
#include <iostream>  // cin cout
using namespace std;

void main()
{
	int  n, k=0, buf ;
	cout << "Enter n:" << endl;
	cin >> n;
	for (int i = 0; i != 10; i++)
	{
		k = 0;
		buf = n;
		while (buf!=0 )
		{   
			if (buf % 10 == i) k++;
			buf = buf / 10;
		
		}
		if (k == 3) break;
	
		
	}
	if (k == 3)
			cout << "da" << endl;
		else
			cout << "net" << endl;
	
}





