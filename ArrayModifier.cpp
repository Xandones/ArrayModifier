#include <iostream>
#include <array>

void ShowArray(int Array[], int ArraySize);
void ModifyArray(int Array[], int ArraySize);

int main()
{
	int Vector[] = { 1,2,3,4,5,6,7,8,9,10 }; 
	/* 
	* When you declare an array in C format, if you use it as a parameter for a function, 
	* any changes made inside the function will be applied to the original array. 
	* This happends because every reference made this way uses a pointer to the first element of the array.
	* The name of the vector works the same way as &Vector[0]
	*/
	int VectorSize = std::size(Vector);

	std::cout << "\nVector size: " << VectorSize;
	std::cout << "\nORIGINAL Vector\n";
	ShowArray(Vector, VectorSize);
	ModifyArray(Vector, VectorSize);
	std::cout << "MODIFIED Vector\n";
	ShowArray(Vector, VectorSize);
}

void ShowArray(int *PtrArray, int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		std::cout << PtrArray[i] << " ";
	}
	std::cout << "\n\n";
}

void ModifyArray(int *PtrArray, int ArraySize)
{
	for (int i = 0; i < ArraySize; i++)
	{
		PtrArray[i] *= 2;
	}
}
