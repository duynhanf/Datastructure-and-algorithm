
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

int ntest, N;

int giaithua(int x){
	
	if( x<2 ){
		return 1;
	}
	
	return x * giaithua(x-1);
}

int main()
{
 	//scanf("%d",&N);
 	
 	//freopen("Labiec16.inp","r",stdin);
	
	scanf("%d",&ntest);
 	
 	for(int i=0;i<ntest;i++){
		scanf("%d",&N);
		
		printf("%d! = %d\n",N,giaithua(N));
	}
	
 	
	getch();
	return 0;
}

