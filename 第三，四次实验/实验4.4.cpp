#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, q = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[q] = list1[i];
			i++;
			q++;
		}
		else
		{
			list3[q] = list2[j];
			j++;
			q++;
		}
	}
	if (i == size1)
	{
		for (; j < size2; j++) {
			list3[q] = list2[j];
			q++;
		}
	}
	else
	{
		for (; i < size1; i++) {
			list3[q] = list1[i];
			q++;
		}
	}
	cout << "The merged list is:";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << ' ';
	}
}
int main() {
	int size1 = 80, size2 = 0;
	int list1[80];
	int list2[80];
	int list3[80];
	cout << "请输入两个有序数组(升序):";
	for (int i = 0; i < 80; i++) {
		int a;
		cout << "请输入数字(升序1)(结束请按0):";
		cin >> a;
		if (a == 0)
		{
			size1 = i;
			break;
		}
		else
		{
			list1[i] = a;
		}
	}
	for (int i = 0; i < 80 - size1; i++) {
		int a;
		cout << "请输入数字(升序2)(结束请按0):";
		cin >> a;
		if ((char)a == 0)
		{
			size2 = i;
			break;
		}
		else
		{
			list2[i] = a;
		}
	}
	merge(list1, size1, list2, size2, list3);
	return 0;
}