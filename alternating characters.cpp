#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<stdio.h>
#include<stddef.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>
char* readline();
int alternatingCharacters(char* s)
{ int count=0;
for(int i=0;i<(strlen(s)-1);i++)
{
	if(s[i]==s[i+1])
	count++;
}
return count;	
}
int main(){
}
