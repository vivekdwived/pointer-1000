/*	 Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this. 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p.
*/

#include<iostream>
using namespace std;

int main()
{
int a=2;
int b=3;
int*p;
p=&a;	//pointing p to a
b=*p;	//store value pointed by p to b
cout<<a<<endl<<b<<endl<<*p<<endl;	//printing the values
a=2,b=3;
p=&b;	//pointing p to b
cout<<a<<endl<<b<<endl<<*p<<endl;	//printing the values

return 0;
}



