#include <iostream>
#include <cstdlib>


using  namespace std;


void PrintMatrixArray(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			
			printf("%02d  ", arr[i][j]);
		}
		cout << endl;
	}
	cout << "***********************************" << endl;
}


bool CheckScalarMatrix(int arr[3][3], int Rows, int Cols)
{
	int Scalary = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != Scalary)
			{
				return false;
			}
			if (i!=j && arr[i][j] != 0)
				return false;
		}
			
		
	}
	return true;
}

bool CheckIsIdentityMatrix(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			if (i == j && arr[i][j] != 1)
				return false;
			if (i != j && arr[i][j] != 0)
				return false;
		}
		
	}
	return true;
}






int main()
{
	int arr[3][3] = { {9,0,0} , {0,9,0} , {0,0,9} };
	int arr1[3][3] = { {1,0,0} , {0,1,0} , {0,0,1} };

	PrintMatrixArray(arr, 3, 3);

	if (CheckScalarMatrix(arr, 3, 3))
		cout << "Yes, Is Scalary\n";
	else
		cout << "No, Is Not Scalary\n";
	
	PrintMatrixArray(arr1, 3, 3);

	if (CheckIsIdentityMatrix(arr1, 3, 3))
		cout << "Yes, Is Identity Matrix\n";
	else
		cout << "No, Is't Identity Matrix \n";

}