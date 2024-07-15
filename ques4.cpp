#include<iostream>
#include<cstring>
using namespace std;

void showAddress(const char*str)
{
	for (int i=0;i<strlen(str);i++){
		cout<<"Address of "<<str[i]<<" : "<<(void*)&str[i]<<endl;}
}

//Function to concatenate two strings
void concat(char s1[],char s2[])
{
	strcat(s1,s2);
	cout<<"Concatenated string is: "<<s1<<endl;
}

//Function to compare two strings
int compare(char s1[],char s2[])
{
	if(strcmp(s1,s2)==0)
		return 0;
	else if(strcmp(s1,s2)>0)
		return 1;
	else
		return -1;
}

//Function to calculate length of the string (using pointers)
int length(char s[])
{
	int count=0;
	for(char *p=s;*p!='\0';p++)
		count++;
	return count;
}

//Function to convert all lowercase characters to uppercase
void toUpper(char s[])
{
	for(int i=0;s[i]!='\0';i++)
		if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;
	cout<<"String in uppercase is: "<<s<<endl;
}

//Function to reverse the string
void reverse(char s[])
{
	int len = length(s);
	char temp;
	for(int i=0;i<len/2;i++)
	{
		temp=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=temp;
	}
	cout<<"Reversed string is: "<<s<<endl;
}

//Function to insert a string in another string at a user specified position
void insert(char s1[],char s2[],int pos)
{
	int len1 = length(s1);
	int len2 = length(s2);
	
	if(pos>len1)
		cout<<"Invalid position!";
	else
	{
		for(int i=len1;i>=pos;i--)
			s1[i+len2]=s1[i];
		
		for(int i=0;i<len2;i++)
			s1[pos+i]=s2[i];
		
		cout<<"String after inserting: "<<s1;
	}
}

int main()
{
	int ch;
	char s1[50],s2[50];
	int pos;

	while(1)
	{
		cout<<"\n\n1. Show address of each character in string\n2. Concatenate two strings\n3. Compare two strings\n4. Calculate length of the string (using pointers)\n5. Convert all lowercase characters to uppercase\n6. Reverse the string\n7. Insert a string in another string at a user specified position\n8. Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			//address
			case 1: cout<<"Enter a string: ";
					cin>>s1;
					showAddress(s1);
					break;
			
			//add two strings
			case 2: cout<<"Enter two strings: ";
					cin>>s1>>s2;
					concat(s1,s2);
					break;
			
			//Compare two strings
			case 3: cout<<"Enter two strings: ";
					cin>>s1>>s2;
					if(compare(s1,s2)==0)
						cout<<"Strings are equal.";
					else if(compare(s1,s2)>0)
						cout<<"String 1 is greater than string 2.";
					else
						cout<<"String 2 is greater than string 1.";
					break;
			
			//length of the string
			case 4: cout<<"Enter a string: ";
					cin>>s1;
					cout<<"Length of the string is: "<<length(s1);
					break;
			
			//lowercase to uppercase
			case 5: cout<<"Enter a string: ";
					cin>>s1;
					toUpper(s1);
					break;
			
			//Reverse the string
			case 6: cout<<"Enter a string: ";
					cin>>s1;
					reverse(s1);
					break;
			
			//Insert a string 
			case 7: cout<<"Enter two strings and position: ";
					cin>>s1>>s2>>pos;
					insert(s1,s2,pos);
					break;
			
			//Exit
			case 8: return 0;
			
			default: cout<<"Invalid choice!";
		}
	}
}
