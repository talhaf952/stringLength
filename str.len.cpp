#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter String: ";
	cin>>str;
	int i=0;
	while(str[i])
	{
		i++;
	}
	cout<<i;
	return 0;
}
