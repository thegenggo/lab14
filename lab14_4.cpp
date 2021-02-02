#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &, int &, int &, int &);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int &a, int &b, int &c, int &d)
{
	int x[] = {a,b,c,d};
	int y[] = {0,0,0,0};
	for(int i = 0; i < 4;i++)
	{
		int c = rand()%4;
		if(x[c]!=y[0]&&x[c]!=y[1]&&x[c]!=y[2]&&x[c]!=y[3])
		{
			y[i] = x[c];
		}
		else
		{
			i--;
		}
	}
	a = y[0], b = y[1], c = y[2], d = y[3];
}