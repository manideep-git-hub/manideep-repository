#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	string str;
	cin>>len>>str;
	int left[len]={0};
	int right[len]={0}; //from right
	left[0]=1;
	right[len-1]=1;
	int count=0;
	//left arr
	for(int i=1;i<len;i++)
	{
		if(str[i]==str[i-1])
		{
			left[i]=left[i-1]+1; //carry forward freq
		}
		else
		{
			left[i]++;
		}
	}
	//right arr
	for(int i=len-2;i>0;i--)
	{
		if(str[i]==str[i+1])
		{
			right[i]=right[i+1]+1;
		}
		else
		{
			right[i]++;
		}
	}
	//main
	for(int i=0;i<len;i++)
	{
		count++;
		if(i>0 && i<(len-1))
		{
			if(str[i-1]==str[i-1] && str[i]!=str[i-1])
			{
				count+=min(left[i-1],right[i-1]);
			}
			else if(str[i-1]==str[i])
			{
				count+=left[i]-1;
			}
		}
		if(i==len-1 && str[i]==str[i-1])
		{
			count+=left[i]-1;
		}
	}
	count<<count;
	return 0;
}

