/*. ���� �� ��������� ����������� ������������ ����� ������:
������������ ���������� �����, ���� ��� �������, � �����, ���������� �� ��������� ����� ��� ������ ���� ��������� ����� � �������� ������� (������������),
���� ����� �������. �������� ���������, ������� ������� ��� ������������
����� � ��������� �� � �� b. */

#include <iomanip>  
#include <iostream>// cin cout
#include <cmath>
using namespace std;

int main()
{
	int a, b, prostoechisl, sverhprostoechisl = 0;

	cout << "enter a , b :" << endl;
	cin >> a >> b;

	for (a; a <= b; a++)
	{
		int i = 2;
		while( i < a )
		{
			if (a % i != 0) prostoechisl = a;
			else 
			{
				prostoechisl = 0;
				break;
			}
			i++;
		}
		if (prostoechisl == 0) continue;
			int rev = 0;
			while (prostoechisl > 0)
			{
				rev = rev * 10 + prostoechisl % 10;
				prostoechisl /= 10;
			}
			int k = 2;
			while (k < rev)
			{
				if (rev % k != 0) sverhprostoechisl = a;
				else
				{
					sverhprostoechisl = 0;
					break;
				}
				k++;
			}
			if (sverhprostoechisl == 0) continue;
			else
			 cout << "superprosoe chislo=" << sverhprostoechisl << endl;
		

		
		



	}
	


}