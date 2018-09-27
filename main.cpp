#include <cstdlib>

#include "deletethis.h"

int main(void) {

   Deletethis pleasedeletethis;
   Deletethis* pdeletethis = new Deletethis();

   pdeletethis->deletethis();

   /* Following code will crash */
   pleasedeletethis.deletethis();

   return EXIT_SUCCESS;
}
