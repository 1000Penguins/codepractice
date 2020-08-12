//bitstuffing bivas

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100]="110011111001111101";
    int l,i,cnt=0;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==1)
            cnt++;
        
        if(a[i]==0)
            cnt=0;

        printf("%c",a[i]);

        if(cnt==5)
            {
                printf("0");
                cnt=0;
            }
    }

    return 0;
}