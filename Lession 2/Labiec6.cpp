
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
int number;

void TimUoc(){
	for(int i=2;i<number/2+1;i++){
		if( number%i == 0 ){
			printf("%d ",i);
		}
	}
}

void solve(){
	TimUoc();
}
int main()
{
	scanf("%d",&number);
 	
 	solve();
	getch();
	return 0;
}

