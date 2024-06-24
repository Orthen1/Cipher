#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char  alphabet[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}  ;
char  key_alphabet [26];


void help(){
  printf("**********HELP************\n");
  printf("1 --> ceasar cipher\n");  
  printf("**********END*************\n");


}


void ceasar_cipher (int shift){
  int internal_cnt = 0;
  for(int i = 0; i < 26; i++){

    if(i + shift > 25){

      key_alphabet[internal_cnt] = alphabet[i];
      internal_cnt++;
    }else{
      key_alphabet[i+shift] = alphabet[i];

    }
  }

  printf("alphabet: %s \n key:     %s \n",alphabet,key_alphabet);

}

void encode(char character){
  for(int i = 0; i < 26 ; i++){
    if(character == alphabet[i]){
      printf("%c",key_alphabet[i]);
    }
    

  }       
}



void state_mashine(int num){
  int shift = 0 ;
  char confimation;
  char string[STR_LIMIT] ;
  int counter = 0;
  switch (num) {
    case  1:
      printf("Enter size of shift\n");
      scanf("%d",&shift);
      printf("is this correct number of shifts: %d\n",shift);
      printf("Enter y(yes) or n(no)\n");
      scanf(" %c",&confimation);
      if(confimation == 'y'){
        ceasar_cipher(shift);
        printf("Enter text to encode\n");
        scanf(" %[^\n]%*c",string);
        while(string[counter] != '\0'){
          if(string[counter] == ' '){
            printf(" ");
          }else{
          encode(string[counter]);
          }
          counter++;
        }
        printf("\n");
      } 




  } 
}

int main(int argc,char *argv[]){


  if(argc < 2){
    help();

  }else{
    int num = atoi(argv[1]);
    state_mashine(num);
  }
  return 1;;


}
