	/*Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.	*/

	#include<iostream>
	using namespace std;

	/*
	1.get the string
	2.call the function which finds length
	3.use pointer to move along the string and`
	*/

	int myStrLen(char*a)
	{	int sum=0;
			for(int i=1;i<n;i++)
			{	
				max=&a[i];
			}
	 	return max;


	//DRIVER FUNCTION

	int main()
	{	int n;
	char c[1000]="vivek dwivedi";
	int z=myStrLen(c);
	cout<<"length of given string is:"<<z<<endl;
	return 0;
	}






