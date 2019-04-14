#include "r_num.h"

void replace_num(int num){
  switch(num){
    case 1:
      printf("I");
      break;
    case 5:
      printf("V");
      break;
    case 10:
      printf("X");
      break;
    case 50:
      printf("L");
      break;
    case 100:
      printf("C");
      break;
    case 500:
      printf("D");
      break;
    case 1000:
      printf("M");
      break;
  }
}

void switch_num(char num, unsigned i){
  switch(num){
    case '1':
      replace_num(1 * pow(10, i - 1));
      break;
    case '2':
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      break;
    case '3':
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      break;
    case '4':
      replace_num(1 * pow(10, i - 1));
      replace_num(5 * pow(10, i - 1));
      break;
    case '5':
      replace_num(5 * pow(10, i - 1));
      break;
    case '6':
      replace_num(5 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      break;
    case '7':
      replace_num(5 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      break;
    case '8':
      replace_num(5 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i - 1));
      break;
    case '9':
      replace_num(1 * pow(10, i - 1));
      replace_num(1 * pow(10, i));
      break;
    default:
      break;
  }
}

void print_M(char* argv, unsigned i){
  unsigned num = 0;
  for(unsigned j = 0; j < i; j++){
    if(j){
      num *= 10;
    }
    num += ((unsigned)argv[j] - 48);
  }
  for(unsigned j = 0; j < num; j++){
    printf("M");
  }
}

void r_num_run(char* argv){
  system("@cls||clear");
  printf("Puvodni cislo: %s\n", argv);
  printf("Rimske cislo: ");
  unsigned len = strlen(argv);
  unsigned i = 0;
  if(len > 4){
      print_M(argv, len - 3);
      i = len - 3;
    }
  for(; i < len; i++){
    switch_num(argv[i], len - i);
  }
  printf("\n");
}
