// C++ code to demonstrate 2D Vector
// with different no. of columns
#include<iostream>
#include<vector> // for 2D vector
using namespace std;
int main()
{
	// Initializing 2D vector "vect" with
	// values
	vector< vector<int> > vect{{1, 2},
							{3, 4, 5},
							{6}};

	// Displaying the 2D vector
	for (int i=0; i<vect.size(); i++)
	{
		//loop till the size of particular
		//row
		for (int j=0; j<vect[i].size() ;j++)
			cout << vect[i][j] << " ";
		cout << endl;
	}

	return 0;

}
