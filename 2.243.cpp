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

					cout << x << "  öһ�֣� " << y << "  ö���֣� " << z <<"  ö���" << endl<<endl;
				
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
	cout << "�� " << i << " �ֻ���:  ";
	i++;
	return i;
}