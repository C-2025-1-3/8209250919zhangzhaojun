#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0;s[i]!='\0'; i++)
	{
		char ch = s[i];
		if(ch>='A'&&ch<='Z')
		{
			ch = ch - 'A' + 'a';
		}
		if (ch >= 'a' && ch <= 'z')
		{
			int t = ch - 'a';
			counts[t]++;
		}
	}
}
int main() 
{
	char s[1000];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, 1000);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << "times" << endl;

		}
	}
	return 0;
}