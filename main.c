#include <stdio.h>

int main(void) {
   char* ppl[]= {"a","b","c","d","e"};
   int posto;
   printf("inserisci la posizione di qui vuoi vedere il nome \n");
   scanf("%d", &posto);
   if (posto>=1 && posto<=5) {
      printf("%s e' al posto: %d", ppl[posto-1],posto);
   }
}
