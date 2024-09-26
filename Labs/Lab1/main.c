#include<stdio.h>
#include"lib.h"


int main() { // Main function //
	int m,ans =2;
	//int ans;
	//ans = 2;
	scanf_s("%d", &m); // count the number of cookies at the end //
	
	for (int i = 3; i <= m; i++) { // Enumeration of numbers for which you need to find a lcm //
		ans = lcm(ans, i); // appeal to auxiliary functions //
	}
	printf("%d", ans-1); // response output //
}