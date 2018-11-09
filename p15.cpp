/*
15. We want to show string repeatedly by shifting top character of string to right. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement. 
*/
#include <iostream>
using namespace std; 
int main(void)
{
char str[20], *p;

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string 
p=str;

// Show string by shifting top character of string to right
for(int i=0;i<20;i++)
{
cout<<*p<<endl;
p++;}

return (0);
}
/*

(Execution example)
$ ./a.out
Input about 10 characters of string
abcd1234EFGH
abcd1234EFGH
bcd1234EFGH
cd1234EFGH
d1234EFGH
1234EFGH
234EFGH
34EFGH
4EFGH
EFGH
FGH
GH
H

$
*/







