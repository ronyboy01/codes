//Aditya Mali
//19/10/2022

#include<stdio.h>
#include<string.h>
char t[100],p[50];
int brute_force()
{
    int n,j,m,i;
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<n;i++)
        {
            j=0;
            while(j<m && t[i+j]==p[j])
            {
                j++;
                if(j==m)
                return i+1; //pattern found
            }
        }
return -1; //pattern not found
}
int main()
{
    int pos;
    printf("Enter the Source String ");
    scanf("%s",t);
    printf("Enter the pattern ");
    scanf("%s",p);
    pos=brute_force();
    if(pos==-1)
        printf("%s pattern not found in text",p);
    else
        printf("%s pattern found at index %d",p,pos);
return 0;
}