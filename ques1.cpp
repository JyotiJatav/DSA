#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(int argc,char* agrv[])
{	
	float sum=0;
	int num,c=1;
	num=atoi(agrv[1]);
	
	for(int i=1;i<num+1;i++)	
	{
			if(c%2==0)
		{
			sum=sum-(1/(pow(i,i)));
		} 
			else
		{
			sum=sum+(1/(pow(i,i)));
		}
		c=c+1;
		}
		cout<<sum<<endl;
		return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
