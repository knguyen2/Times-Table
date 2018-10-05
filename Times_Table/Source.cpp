#include <iostream>
#include <iomanip> //needed to manipulate input and output manipulator 
using namespace std;

const int TIMES = 10; //Declaring constant variable
void printMultiplyArray(int multiplyArray[TIMES][TIMES]);

int main()
{

	int multiplyTable[TIMES][TIMES];
	int row, col; 


	//fill multiplication table
	//nested for loop
	for (row = 0; row < TIMES; row++)
	{
		for (col = 0; col < TIMES; col++)
		{
			multiplyTable[row][col] = (row + 1) * (col + 1);
		}
	}

	printMultiplyArray(multiplyTable);

	system("pause");
	return 0;
}

void printMultiplyArray(int multiplyArray[TIMES][TIMES])
{
	int row, col;
	//print multiplication table
	for (row = 0; row < TIMES; row++)
	{
		//print columns for my row 
		for (col = 0; col < TIMES; col++)
		{
			//cout << multiplyArray[row][col];				UGLY PRESENTATION
			//cout << multiplyArray[row][col] << "\t";		OKAY PRESENTATION, COULD BE BETTER
			cout << setw(4) << multiplyArray[row][col];		// setw(value) is for setting the width of the data

		}
		cout << endl;
	}

}