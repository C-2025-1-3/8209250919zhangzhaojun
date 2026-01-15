#include <iostream>
using namespace std;

void paixv(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minindex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minindex]) minindex = j;		
		}
		if (minindex != i)
		{
			int temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;
		}
	}
}

//void printarr(int *arr,int size)
//{
//
//}


int main() {
	int size;
	cout << "请输入数组大小：";
	cin >> size;
	if (size <= 0)
	{
		cout << "必须为正整数！" << endl;
		return 1;
	}
	int* arr = new int[size];
	if (arr == NULL) {
		cout << "内存分配失败！" << endl;
		return 1;
	}
	cout << "请输入 " << size << " 个整数: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "元素 " << i + 1 << ": ";
		cin >> arr[i];
	}

	paixv(arr, size);
	cout << "排序后的数组：" << endl;
	int* ptr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *ptr << " ";
		ptr++;
	}
	cout << endl;

	delete[]arr;
	arr = NULL;

	return 0;
}


