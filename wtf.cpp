template<class t>
class da
{
public: t ele[100];
int len;
DA(t *src,int l)
int find(t u);
void append(t d);
}

main()
{
int ints[20]={1,2,3,1,4,1,6};
int c;
DA <int>iarr(ints,7);
c=iarr.find(1);
cout<<c;
}

DA <t>::DA(t *src, int l)
{
for(int i=0;i<len;i++)
    de[i]=src[i];
len=l;

}

int DA <t>::find(t d)
{
    int c;
    for(int i=0;i<len;i++)
        if(ele[i]==d)
            c++;

    return c;        
}

int DA <t>::append(t d)
{
    ele[len]=d;
    len++;
}