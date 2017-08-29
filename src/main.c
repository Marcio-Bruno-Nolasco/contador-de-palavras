/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>


int main() {

  
  char b[200];
  int tamanho;
  int palavras=1;
  int j = 0;
  


  scanf("%[^\n]s", b);
  tamanho =strlen(b);

  while(j <=tamanho ){
     
    if ((b[j] == ' ') || (b[j] == '!') || (b[j] == '?') ||(b[j] == '.') || (b[j] ==',') ||( b[j] == ';') || (b[j] == ':') || (b[j] == '-')||(b[j]=='\n'))   {
     j++;
      
      if (b[j+1]== '\n'){
        palavras = palavras -1;
      }

      while( (b[j] == ' ') || (b[j] == '!') || (b[j] == '?') ||(b[j] == '.') || (b[j] ==',') ||( b[j] == ';') || (b[j] == ':') || (b[j] == '-')){
        j++;
      }

      
      if(b[j-1] == '.' || b[j-1]==','){
        if(47 < b[j] && b[j] < 58){
          palavras= palavras - 1;
        }
      }

     palavras ++;
     
     }
    



   j++;
   }

 if ((b[tamanho-1] == ' ') || (b[tamanho-1] == '!') || (b[tamanho-1] == '?') ||(b[tamanho-1] == '.') || (b[tamanho-1] ==',') ||( b[tamanho-1] == ';') || (b[tamanho-1] == ':') || (b[tamanho-1] == '-')||(b[tamanho-1]=='\n')){
  palavras = palavras -1;
 }

  
  printf("%d\n", palavras );
  return 0;
}
