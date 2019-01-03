
#include <iostream>


using namespace std;
void format(int q)
{
	if (q < 10)
	{
		cout << " " << q << " ";
	}
	else if (q < 100)
	{
		cout << " " << q ;
	}
	else
	{
		cout<< q;
	}


}


int main()
{
	//enter the  number between 2-100
	for (int y = 1; y <= 2; y++)
	{
		for (int i = 1; i <= 12; i++)
		{
			for (int j = ((y-1)*6)+1; j <= y * 6; j++)
			{

				format(j);
				cout << " X ";
				format(i);
				cout << " = ";
				format(j * i);
				cout << "    ";
			}

			cout << endl;
		}
		cout << endl << endl;

	}

	
	//system("pause");
	
	return 0;
}
