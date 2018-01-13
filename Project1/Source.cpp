#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int cube=0;
	srand(unsigned(time(0)));
	/*	do 
		{
			cube = rand() % 6 + 1;h
			cout << cube<<endl;
		} while (cube != 2 && cube != 5);
		*/
	/*	int cube1 = 0;
		int cube2 = 0;
		do
		{
			cube1 = rand() % 6 + 1;
				cout << cube1;
				cube2 = rand() % 6 + 1;
				cout << cube2 << endl;
		} while (cube1 != 6 || cube2 != 6);*/
	int sumcold = 0;
	int temp = 0;
	int sum = 0;
	int coldDays = 0;
	int warmDays = 0;
	int notWarmDays = 0;
	for (int i = 1; i <= 10; i++)
	{
		
		
			temp =-20+ rand() %(4 + 20 + 1);
				cout << temp << endl;
				sum  +=temp;
				if (temp < 0)
				{
					coldDays++;
					sumcold += temp;
				}
				else if (temp > 0)
				{
					warmDays++;
				}
				else 
				{
					notWarmDays++;
				}
		
	}
	cout << "cold Days" << coldDays << endl;
	cout << "warm days" << warmDays << endl;
	cout << "days with temperature = 0" << notWarmDays << endl;
	cout << "midle temerature" << float(sum)/10 << endl  ;
	cout << "midle cold temperature" << float(sumcold) / 10 << endl;



		
		system("pause");

}
