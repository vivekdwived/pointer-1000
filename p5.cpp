		//Write a piece of code which prints the characters in a cstring in a reverse order.


	#include<iostream>
	using namespace std;


	//DRIVER FUNCTION

	int main(){

	/*1.get the sring from the user
	2.store IN AN CHAR ARRAY
	3.find size of array using a FOR loop till '/0' null char. comes
	4.declare a pointer to the last element of array,..
	5.use for loop to print value in that address and decrease address--
	*/

	char s[1000] = "abcde vivek dwivedi";
	char* cptr;

	// WRITE YOUR CODE HERE

	cptr=s;
	cout<<"reversed string is:";
	for(int i=1000;i>=0;i--)
	{	cout<<*(cptr+i);}

	return 0;
	}
