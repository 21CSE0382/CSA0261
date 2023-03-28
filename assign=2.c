es (16 sloc)  363 Bytes

#include <stdio.h>

int main() {
   char ch;

   printf("Enter a character: ");
   scanf("%c", &ch);

   if (ch >= 'a' && ch <= 'z') {
      printf("%c is a lowercase alphabet.\n", ch);
   }
   else if (ch >= 'A' && ch <= 'Z') {
      printf("%c is an uppercase alphabet.\n", ch);
   }
   else {
      printf("%c is not an alphabet.\n", ch);
   }

   return 0;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
