/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		if(atoi(argv[i+1])==0){
			argc = i;
			break;
		}
		else
			testcase[i] = atoi(argv[i+1]);
	}
	//Your codes here
		int j = 0, n = 1, a[100], count = 1;
    while (n != 0) {
        scanf("%d",&n);
        a[j] = n;
        j++;
        count++;
    }
    
    int max = 0, min = 0;
    for (j = 0; j < count; j++){
        if (a[j] != 0){
            if (max < a[j]){
                max = a[j];
            }
            if (a[j] < min){
                min = a[j];
            }
        }
    }
    printf("Max: %d", max);
    printf("\nMin: %d", min);
	return 0;
}
