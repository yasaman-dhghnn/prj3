#include <iostream>

using namespace std;

int main () 
{
	int a[100];
	int n;

	cout << "pls enter N" << endl;
	cin >> n;

	srand(time(0));

	for(int i=0 ; i<n ; i++) 
	{
		A[i] = rand() % 1000;
	}

	for(int i=0 ; i<n ; i++) 
	{
		cout << "E number " << i + 1 << " = " << a[i] << endl;
	}


	system("pus");
	return 0;
}
