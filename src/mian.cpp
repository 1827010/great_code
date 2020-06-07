#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#ifdef this_is_a_great_codo
問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
#endif
int main() { 

	const int max = 1000;
	char mojiretsu[1000];
	
	for (int i = 1; i < max; i++) {
		sprintf_s(mojiretsu, "%d", i);
		printf("%s, ", i % 15 ? i % 3 ? i % 5 ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz");
	}
	system("PAUSE"); 
}
