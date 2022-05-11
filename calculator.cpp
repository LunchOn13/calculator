#include <iostream>
using namespace std;

int main()
{
	int fnum=0;
	int snum=0;
	int result=0;

	// branch 2
	// branch 22
	cin >> fnum;
	cin >> snum;

	result = fnum+snum;
	cout << result << endl;

	result = fnum-snum;
	cout << result << endl;

	if (snum != 0)
	{
	result = fnum/snum;
	cout << result << endl;
	
	result = fnum%snum;
        cout << result << endl;
	}


	if(snum==0)
        cout << "division by Zero";



return 0;
}
