#include<iostream>
using namespace std;

int main()
{
string str;
cout<<"enter string using underscore as space::";
cin>>str;
int found;
char string_matrix[str.size()];
int freq[str.size()]={0};
int index=0;

for (int i=0;i<str.size();i++)
{
found=0;
for (int j=0; j<index; j++)
{
if (string_matrix[j]==str[i])
{
found=1;
freq[j]=freq[j]+1;
break;
}
}
if (found==0)
{
string_matrix[index]=str[i];
index++;
}
}
for (int i=0;i<index;i++)
{
cout<<string_matrix[i]<<" "<<freq[i]+1<<endl;
}
return 0;
}
