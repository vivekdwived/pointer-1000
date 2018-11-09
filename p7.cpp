	//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
 	#include<iostream>
	using namespace std;
 	
	/*
	1.get the no of elements in arr
	2.get the array 
	3.call a function having array 
	4.have a for loop to get the maximum element 
	5.again use the for loop to get the index of this maxima element
	6.then declare a pointer ,send it to that index of the array.

	*/


 	double* maximum(double* a, int n)
	{	
		double* max=a;


		for(int i=1;i<n;i++)
		{	
			if(a[i]>*max)
			max=&a[i];
		}
 	return max;
	}
 	int main()
	{	int n;
 		cout<<"enter the size of your integer array:"<<endl;
		cin>>n;
	
		double a[n];
		cout<<"enter the elements of the array:";
			for (int i=0;i<n;i++){
			cin>>a[i];
			}
 		double *ptr;
		ptr=maximum(a,n);
		cout<<"required maximum element in array is:"<<*ptr<<endl;
	return 0;
	}
