#include <fstream>
#include <iostream>
using namespace std;






bool binarySearch(int *list, int size, int value)
{
	while (size != 0)
	{
		int middle = size / 2;
		int* middleArrElementPtr = list + middle;
		int middleArrElemValue = *middleArrElementPtr;
		if (middleArrElemValue == value) {
			return true;
		}

		else if (value < middleArrElemValue)
		{

			middle = (size / 2) + 1;
			value = middle;
			return true;
		}

		else
			middle = (size / 2) - 1;
		value = middle;
		return true;



	}

}




void main()
{

	int m_BinarySearch[100];
	int *ArrayFirstElelmet = m_BinarySearch;

	void LoadBinaryFile(const char filename[]);


	ifstream infile("binarysearchIn.txt", ios::in);
	if (infile.is_open()) {
		for (int x = 0; x < 100; x++) {
			infile >> m_BinarySearch[x];
			

		}
	}
	else
	{
		cout << "File not stored to array successfully" << endl;
	}

	bool result = binarySearch(ArrayFirstElelmet, sizeof(m_BinarySearch), 45);

	if (result == false)
	{
		cout << "Element was not found" << endl;

	}
	else if (result == true)
		cout << "Element Found" << endl;
	cout << "This is for iterative binary search" << endl;

}
