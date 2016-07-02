
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

int N;
void solve(){
	
	for(int i=1;i<=N/2;i++){
		
		printf("%d %d\n",i,N-i);
	}
	
}


int main()
{
 	scanf("%d",&N);
 	
 	solve();
 	
	getch();
	return 0;
}

