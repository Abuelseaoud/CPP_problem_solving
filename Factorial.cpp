#include <iostream>

using namespace std;

int main ()
{

    //enter the  number between 2-100
    int x,y=1;
    do
    {#include <iostream>

#include <vector>
using namespace std;
vector<int> factStep(int x, vector<int>progress)
{
	int size = progress.size();
	int carry = 0;
	for (int j = 0; j < size; j++)
	{

		int q = progress[j] * x + carry;
		progress[j] = (q % 10) ;
		carry = int(q / 10);

	}
	while (carry )
	{
		progress.push_back(carry%10);
		carry /= 10;
	}
	return progress;
}
void factorial(int num)
{
	vector<int> fact;
	//initializing 
	fact.push_back(1);
	for (int i = 2; i <= num; i++)
			fact = factStep(i, fact);

	int size = fact.size();
	for (int a = size - 1; a >= 0; a--)
			cout << fact[a];
	cout << endl;
}

int main()
{
	//enter the  number between 2-100
	int x;
	long long  y = 1;
	do
	{
		cin >> x;
	} while (x < 2 || x>100);
	factorial(x);
	return 0;
}

    cin>>x;
    }
    while(x<2||x>100)
    for (int j =1;j<=x;j++)
      {
       y*=j;
      }
      
      cout<<j<<endl;

    return 0;
}
