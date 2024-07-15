#include<iostream>
using namespace std;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[])
{
	int i=0, j=0,k=0;
	while (i<size1 && j<size2)
	{
		if (arr1[i]<arr2[j])
			result[k++]=arr1[i++];
		else
			result[k++]=arr2[j++];
	}
	while (i<size1)
		{result[k++]=arr1[i++];
		}
	while
	(j<size2)
		{result[k++]=arr2[j++];
		}
}
int main(){
	int a[10], b[10],n,n3;
	cout<<"enter size of array 1;";
	cin>>n;
	cout<<"enter elements of array";
	for (int i=0; i<n; i++)
		cin>>a[i];
	cout<<"enter size of array2;";
	cin>>n3;
	cout<<"enter elements of array2";
	for (int i=0; i<n3; i++)
		cin>>b[i];
	int mergedSize = n+n3;
	int merged[mergedSize];
	mergeArrays(a,n, b, n3, merged);
	cout<<"Merged array;";
	for(int i=0; i<mergedSize; i++)
	{
		cout<<merged[i]<<" ";
	}
	return 0;
}

	
	
