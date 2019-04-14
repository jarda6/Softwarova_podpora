#include "param.h"

bool param_count(int argc){
  if(argc != 2){
    fprintf(stderr, "Nespravny pocet argumentu\n");
    return false;
  }
  return true;
}

bool is_num(char * argv1){
  for(unsigned int i = 0; i < strlen(argv1); i++){
    if(argv1[i] < 48 || argv1[i] > 57){
      fprintf(stderr, "Argument neni cislo\n");
      return false;
    }
  }
  return true;
}

bool param(int argc, char ** argv){
  if(!param_count(argc)){
    return false;
  }
  if(!is_num(argv[1])){
    return false;
  }
  return true;
}
