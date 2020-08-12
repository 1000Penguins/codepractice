#include <iostream>
#include <stdio.h>

using namespace std;
int ig[10] = {65,66,67,68,69,70,71,72,73,74};
int cnt =0;
void fn();

int main()
{
    //int *ip;
    char *cp;

    int ia[10] = {65,66,67,68,69,70,71,72,73,74};
    //ip = ia;
    
    cp = (char *) ia;
    for (int i=0;i<40;i++)
    {
        //printf("%d",*cp++);
        cout<<*cp++;
    }
    
    printf("\n");
    printf("Location of ia  = %X\n",ia);
    printf("Location of ig  = %X\n",ig);
    printf("Location of fn  = %X",&fn);
    printf("\n");
    
    fn();

	void(*f)();
	f = &fn;
	f();
    
    return 0;
}


void fn()
{
    int a=5;
    printf("Location of a = %X\n",&a);
    cnt++;

    printf("in level %d\n",cnt);
    if (cnt<5)
        fn();
}
