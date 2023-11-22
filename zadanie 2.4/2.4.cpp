/*одится последовательность целых чисел.Определить количество элемен -
тов в наиболее длинной подпоследовательности подряд идущих чисел, упорядо -
ченных по возрастанию*/
#include <iomanip>  
#include <iostream> // cin cout
#include <cmath>
using namespace std;

int main()
{
	int  num, count = 0, bufcount1 = 0, bufcount2 = 0, bufnum = 0, counter;

	int i = 0;
	do
	{
		cout << "Enter element of sequence:" << endl;
		cin >> num;
		if (bufnum + 1 == num)
		{
			count++;
		}
		bufnum = num;
		bufcount1 = count;
		if (bufcount2 < bufcount1) bufcount2 = bufcount1;

	}
		while (num != 0);
		cout << "number of elements =" << bufcount2 << endl;



	
}