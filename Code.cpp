#include <iostream>
using namespace std;
int main()
{
	int n , a[101] , i , max= -22222222, sum = 0 ;
	cin >> n;
	if (n < 1 || n>100)
		return 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
		{
		sum = 0;
		for (int j = i ; j < n; j++)
			{
			//if(a[j]>0)
			sum += a[j];

			if (max < sum)
				max = sum;
			}
		}
	if (max >= 0)
		cout << max;
	else cout << 0;
	return 0;
}