#include <iostream>
#include <stdlib.h>

using namespace std;

class smallobj
{
	private:
		int	somedata;
	public:
		void setdata(int x)
		{
			somedata = x;
		}
	
		void showdata()
		{
			cout << "Число равно: " << somedata << endl;
		}
};

int main()
{
	smallobj s1;
	cout << "Введите число: " << endl;
	int x;
	cin >> x;
	s1.setdata(x);
	s1.showdata();
	return 0;
}
