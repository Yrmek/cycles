/*��������� ������� ��� �������� ������������������ �������� ������ ����-
������� ����� k. ���������� k-� ����� ������������������:
2. 1101001000..., � ������� �������� ������ ������� 10; */

#include <iomanip>  
#include <iostream> // cin cout
using namespace std;

int main()
{
	int k = 0;
	cout << "Enter number k of digit:" << endl;
	cin >> k;
	int i = 0;
	int iSequence = 1;

	do
	{
		iSequence = iSequence + i;

		if (iSequence == k)
		{
			cout << "digit k = 1" << endl;
			break;
		}
		i++;
	} while (iSequence < k);

	if (iSequence != k) cout << "digit k = 0" << endl;
	return 0;
}