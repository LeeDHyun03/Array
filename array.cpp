#include <iostream>

int array[5];
int arraySum;
int arrayAvg;
int arraySize = (sizeof(array) / sizeof(*array));

int ArraySumFunc()
{ 
	for (int i = 0; i < arraySize; i++) arraySum += array[i];
	return arraySum;
}
int ArrayAvgFunc()
{
	for (int i = 0; i < arraySize; i++) arrayAvg += array[i];
	return arrayAvg / arraySize;
}
void ArraySort(int array[], int isSortWay)
{
	int index = 0;
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			if (i == j) continue;
			if (array[i] > array[j] && isSortWay == 2 || array[i] < array[j] && isSortWay == 1)
			{
				index = array[i];
				array[i] = array[j];
				array[j] = index;
			}
		}
	}
}

int main()
{
	for (int i = 0; i < arraySize; i++) std::cin >> array[i];
	std::cout << "배열의 합: " << ArraySumFunc() << " || " << "배열의 평균: " << ArrayAvgFunc() << std::endl;
	int isSortWay;
	std::cout << "배열 정렬 방식 선택 \n 1번. 오름차순 2번. 내림차순\n";
	std::cin >> isSortWay;
	ArraySort(array, isSortWay);
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
