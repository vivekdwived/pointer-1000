/*	Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method.
*/

#include<iostream>
using namespace std;

int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};	//create the array

//printing it by normal index method

for(int i=0;i<10;i++)
{cout<<a[i]<<endl;}

//printing by pointer pp
int *p=a;
for(int i=0;i<10;i++)
{cout<<p;
p++;
}

return 0;
}
 
