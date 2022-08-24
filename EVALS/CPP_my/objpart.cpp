#include <iostream>

using namespace std;

class part
{
	private:
		int modelnumber;
		int	partnumber;
		float cost;
	public:
		void setpart(int mn, int pn, float c)
		{
			modelnumber = mn;
			partnumber = pn;
			cost = c;
		}
		
		void showpart()
		{
			cout << "Модель: " << modelnumber;
			cout << ", деталь: " << partnumber;
			cout << ", стоимость: " << cost << endl;
		}
};

int main()
{
	part a1;
	a1.setpart(123, 666, 1337.228F);
	a1.showpart();
	return (0);
}
