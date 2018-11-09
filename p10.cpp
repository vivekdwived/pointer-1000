	/*
	Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
	int main()
	{
	  char s[10] = "abcde";
	  revString(s);  // call the function
	  return 0;
	}

	void revtString(char* ptr)
	{
	}
	*/

	#include<iostream>
	using namespace std;

	//reversing the function

	void revString(char*a)
	{	a=(a+9);
	  // WRITE YOUR CODE HERE
		for(int i=0;i<10;i++)
		{  cout<<*a;
		   a--;}
	}
	//DRIVER FUNCTION
	int main()
	{
	char s[10]="abcde";
	revString(s);		//calling the function

return 0;
}









