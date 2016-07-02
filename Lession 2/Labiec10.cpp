
// Author : Bui Duy Nhan
//
//

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;


int USCLN(int a, int b)
    {            
        a=abs(a); 
        b=abs(b);            
        if (a==0 ||b==0)
            return a+b;
        while (a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a;
    }

int main()
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	int UCLN = USCLN(a,b);
	int BCNN = a*b/UCLN;
	
	printf("%d\n",UCLN);
	printf("%d\n",BCNN);
	
	getch();
	return 0;
}

