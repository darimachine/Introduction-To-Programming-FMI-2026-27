#include <iostream>

using namespace std;

//int sumPtr(const int* p, int n)
//{
//	int result = 0;
//	int i = 0;
//	for (; i < n; i++)
//	{
//		result += *(p + i);
//	}
//
//	return result;
//}

//void compare(const int* a, const int* b, int& min, int& max) {
//
//	if (*a >= *b) { 
//		max = *a; 
//		min = *b; 
//	} else { 
//		max = *b; 
//		min = *a; 
//	}
//}

//void countNumbers(const int* a, int n, int& evenCnt, int& oddCnt, int& divisibleBy3Cnt) {
//	evenCnt = 0;
//	oddCnt = 0;
//	divisibleBy3Cnt = 0;
//	for (int i = 0; i < n; i++) {
//		if (*(a + i) % 2 == 0) {
//			evenCnt++;
//		}
//		if (*(a + i) % 2 == 1) {
//			oddCnt++;
//		}
//		if (*(a + i) % 3 == 0) {
//			divisibleBy3Cnt++;
//		}
//	}
//}

bool areIdentical(int* arr1, int* arr2, int n) {
	for (int i = 0; i < n; i++)
	{
		if (*(arr1 + i) != *(arr2 + i))
		{
			return false;
		}
	}

	return true;
}

const int* firstOccuranceOfElement(const int* arr, int arr_size, int element)
{
	for (int i = 0; i < arr_size; i++)
	{
		if (*(arr + i) == element)
		{
			return (arr + i);
		}
	}
}

int main()
{
	int a[4][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{44, 77, 88},
		{99, 100, 110}
	};


	for (int i = 0; i < 4; i++)
	{
		int sumOfRow = 0;
		for (int j = 0; j < 3; j++)
		{
			sumOfRow += *(*(a + i) + j); //a[i][j] 
		}
		cout << sumOfRow << " ";
	}
	//int b[5] = { 1, 3, 4, 5, 6 };

	//const int* p =  firstOccuranceOfElement(a, 5, 3);
	//cout << (p - a);
	//
	//int* start;
	//int* end;

	//start = a;
	//end = &(*(a + 4));

	//while (start < end)
	//{
	//	int tmp;
	//	tmp = *start;
	//	*start = *end;
	//	*end = tmp;
	//	start++;
	//	end--;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << *(a + i)<<" ";
	//}
}