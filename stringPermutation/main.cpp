#include <iostream>
#include<string>
#include<conio.h>
using namespace std;

string sort(string s) {
	int length = s.length();//Function to get string length.
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - 1; j++) { //Nested for loop
			if (s[j] > s[j + 1]) {
				swap(s[j], s[j + 1]);//Function the swaps the values inside two variables.
			}
		}

	}

	return s;
}


void next_permutation(string a, int l, int r) {
	// Base case  
	if (l == r)
		cout << a << endl;
	else
	{
		// Permutations made  
		for (int i = l; i <= r; i++)
		{

			// Swapping done  
			swap(a[l], a[i]);

			// Recursion called  
			next_permutation(a, l + 1, r);

			//backtrack  
			swap(a[l], a[i]);
		}
	}
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		sort(s);
		next_permutation(s, 0, s.length() - 1);
	}
	_getch();
	return 0;
}
