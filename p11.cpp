	 /*Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )*/

	#include<iostream>
	using namespace std;

	int main()
	{	
	int x;
	double y;
	char z;
	float a;
	bool b;


	int*xx=&x;
	double*yy=&y;
	char*zz=&z;
	float*aa=&a;
	bool*bb=&b;

	int p1=sizeof(*xx);
	int p2=sizeof(*yy);
	int p3=sizeof(*zz);
	int p4=sizeof(*aa);
	int p5=sizeof(*bb);

	cout<<"size of integer is:"<<p1<<endl;
	cout<<"size of double is:"<<p2<<endl;
	cout<<"size of char is :"<<p3<<endl;
	cout<<"size of float is:"<<p4<<endl;
	cout<<"size of bool data type is :"<<p5<<endl;

return 0;
}

