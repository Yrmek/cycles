/*Вычислить значение многочлена для заданного n в точках хi  [х0; хm]
(хi = х0 + iх, i = 0, 1, ...) двумя способами: суммируя элементы по возрастанию
степени x и по схеме Горнера. Посчитать количество операций сложения и умно-
жения в том и другом случае*/
#include <iomanip>  
#include <iostream> // cin cout
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите n" << endl;
	cin >> n;
	for (double x = 1; x < 5.01; x += 0.5)
	{
		float X, Sum = 0;
		X = x;
		for (int N = 1 ; N <= n; N++)
		{
			Sum += N * float(pow(X, 2 * N - 1));
		}
		Sum += 5;
	float SumG = 0;
	SumG = n;
	X = x;
	for (int N = n-1; N >= 0; N--) 
	{
		SumG = SumG * float(pow(X,2*N-1)) + N-1 ;
	}
	cout << "|" << setw(5) << x << "|" << setw(15) << Sum << "|" << setw(15) << SumG << "|" << endl;
	}
}