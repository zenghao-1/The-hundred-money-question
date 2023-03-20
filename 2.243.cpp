#include <iostream>
using namespace std;
int puts(int& i);
int main()
{
	int x = 0, y = 0, z = 0;
	int i = 1;
	for (x = 0; x <= 100; x++)
	{
		for (y = 0; y <= 50; y++)
		{
			for (z = 0; z <= 20; z++)
			{
				if (x + 2 * y + 5 * z == 100)
				{
					puts(i);

					cout << x << "  枚一分， " << y << "  枚两分， " << z <<"  枚五分" << endl<<endl;
				
				}
				else
				{
					continue;
				}

			}
		}
	}
		
}
int puts(int& i)
{
	cout << "第 " << i << " 种换法:  ";
	i++;
	return i;
}