//PSEUDO RANDOM NUMBER GENERATED FOR CRYPTO KEY
//EPOCH TIME - SECONDS ELAPSED SINCE 1 JAN 1970 12:00 AM MIDNIGHT
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define KEYSIZE 20
void main()
{
int i;
char key[KEYSIZE];
printf("%lld\n", (long long) time(NULL));
srand (time(NULL));
for (i = 0; i< KEYSIZE; i++){
key[i] = rand()%256;
printf("%.2x", (unsigned char)key[i]);
}
printf("\n");
}
