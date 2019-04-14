/*!
 * \brief Spoustěcí soubor, který volá funkce
 * \author Jaromír Šarf
 * \author Matěj Hynek.
 */
#include <stdio.h>
#include "param.h"
#include "r_num.h"

int main(int argc, char ** argv){
  if(param(argc, argv)){
    r_num_run(argv[1]);
    return 1;
  }
  return 0;
}
