#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	float inches;
};
Distance addent (Distance, Distance);
void edldisp(Distance);

int main()
{
	Distance d1, d2, d3;
	cout << "Please! Enter feet: ";
	cin >> d1.feet;
	cout << "Please! Enter inches: ";
	cin >> d1.inches;
	cout << "Please! Enter feet: ";
	cin >> d2.feet;
	cout << "Please! Enter inches: ";
	cin >> d2.inches;
	d3 = addent(d1,d2 );
	cout << "d1 = "; edldisp(d1);
	cout << "d2 = "; edldisp(d2);
	
	system("pause");
	return 0;
	}

Distance addent(Distance dd1, Distance dd2)
{
	if (dd1.feet > dd2.feet)
		return dd1;
	if (dd1.feet < dd2.feet)
		return dd2;
	if (dd1.inches > dd2.inches)
		return dd1;
	else
		return dd2;
	}

void edldisp(Distance dd)
{
	cout << dd.feet << "-" << dd.inches << endl;
}