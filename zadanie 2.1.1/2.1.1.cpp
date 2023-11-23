//Дано натуральное n.Верно ли, что это число содержит ровно три одинаковых
//цифры ?

#include <iostream>

using namespace std;

void main()
{
	int  n , k = 0 , temp ;
	cout << "Enter natural number n:" << endl;
	cin >> n;

	for (int i = 0; i != 10; i++)
	{
		k = 0;
		temp = n;
		while (temp!=0 )
		{   
			if (temp % 10 == i) k++;
			temp = temp / 10;
		}
		if (k == 3) break;	
	}
	if (k == 3)
		cout << "Yes, there are" << endl;
	else
		cout << "No, there aren't" << endl;
}





