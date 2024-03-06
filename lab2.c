#include <stdlib.h>
#include <stdio.h>

int function(int x){
    while (x>0){
        x=x-2;
        x=function(x); //eu doar am comentat linia asta
    }
	return x;
}

int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}

	printf("%d", i);
	return 0;
}

//horia a fost aici