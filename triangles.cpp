#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main()
{
	int n, m;
	char symbol;
	cout << "Please enter number of lines, spaces from left margin, and char symbol, separated by spaces: ";
	cin >> n >> m >> symbol;
	printShiftedTriangle(n, m, symbol);
	printPineTree(n, symbol);





	


	return 0;
}
void printShiftedTriangle(int n, int m, char symbol)
{
	
	int count=0;
	while (count < n)
	{
		
		for (int space = 0; space < n - count + m; space++)
			cout << " " ;
		for (int star = 0; star <= 2*count ; star++)
			cout << symbol;
		count++;
		cout << endl;
	}
		








}


void printPineTree(int n, char symbol)
{

	int counter = 0;
	
	
	while (counter < n)
	{
		int count = 0;
		int temp = 1;
		while (count <counter+2)
		{
			
			for (int space = 0; space < n - count; space++)
				cout << " ";
			for (int star = 0; star <= 2 * count; star++)
				cout << symbol;
			cout << endl;
			count++;
		
		}
		counter++;
		
		
		

	}
}





