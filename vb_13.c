#include <stdio.h>
#include <stdlib.h>

int main()
{
   int kb,mb,gb;
   int byte;

   printf("Enter the No. of Bytes: ");
   scanf("%d", &byte);

   kb = byte / 1024;
   mb = kb / 1024;
   gb = mb / 1024;

   printf("%d Bytes = %d KiloBytes\n", byte,kb);
   printf("%d Bytes = %d MegaBytes\n", byte,mb);
   printf("%d Bytes = %d GigaBytes\n", byte,gb);

   return 0;
}
