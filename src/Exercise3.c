/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int a,b,prime;
	for (a=2;a < testcase;a++)
	{
		prime=1;
	for(b=2; b<a; b++){
		if(a%b==0){
			prime =0;
		}
	}	
	if(prime =1 ){
		printf("%d",a);
	}
	}
	return 0;
}
