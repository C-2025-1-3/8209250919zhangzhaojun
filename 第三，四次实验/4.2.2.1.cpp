#include<iostream>
#include<cstring>
using namespace std;

int indexof(const char* s1, const char* s2)
{
	if (s1 == NULL || s2 == NULL)return -1;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 > len2)return -1;
	for (int i = 0; i <= len2 - len1; i++)
	{
		bool found = 1;
		for (int j = 0; j < len1; j++)
		{
			if (s2[i + j] != s1[j])
			{
				found = 0;
				break;
			}
		}
		if (found)return i;
	}
	return -1;
}
int main() 
{
	char s1[100], s2[100];
	cout << "请输入字符串s1:" << endl;
	cin.getline(s1, 100);
	cout << "请输入字符串s2;" << endl;
	cin.getline(s2, 100);

	int index=indexof(s1, s2);
	if (index==-1)cout << "s1不是s2的子串" << endl;
	else cout << "s1是s2的子串，第一次匹配的下标为: " << index << endl;
} 