#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
	 double n = 2000000;
	vector<bool> primeNumber(n-2+1,1);

	long long sum = 0;
	int i;
	for (int p = 2; p <= n; p++)
	{
		if (primeNumber[p - 2] == 1)
		{
			//cout<<"Prime:  "<< p << endl;
			sum += p;
		}

		if (sqrt(n) >= p){
			i = pow(p, 2);

			while (i <= n)
			{
				primeNumber[i - 2] = 0;
				i += p;
			}
		}
	}

	cout << "Sum is:   " << sum << endl;
	cin.get();
	return 0;
}


