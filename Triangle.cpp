#include<iostream>
using namespace std;
int main()
{
	int star,size;
	cout<<"Enter the size of the triangle: ";
	cin>>size;
	int space=size;
	for(int i=0;i<size;i++)
	{
		for(int j=space;j>0;j--)
		{
			cout<<" ";
		}
		for(star=0;star<=i*2;star++)
		{
			cout<<"*";
		}
		space--;
		cout<<endl;
	}
}