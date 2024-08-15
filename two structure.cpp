#include <stdio.h>

struct Dis {
   int f;
   float in;
} d1, d2, result;

int main() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.f);
   printf("\nEnter inch: ");
   scanf("%f", &d1.in);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.f);
   printf("\nEnter inch: ");
   scanf("%f", &d2.in);
   
   // adding distances
   result.f = d1.f + d2.f;
   result.in = d1.in + d2.in;

   // convert inches to feet if greater than 12
   while (result.in >= 12.0) {
      result.in = result.in - 12.0;
      ++result.f;
   }
   printf("\nSum of distances = %d\'-%.1f\"", result.f, result.in);
   return 0;
}
