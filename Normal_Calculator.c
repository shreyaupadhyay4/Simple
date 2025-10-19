#include<stdio.h>
#include<math.h>
int main(){
  printf("Welcome to our Calculator\n");
  float num1, num2, result;
  char operations;
  char repeat='y';
  do{
  printf("Choose which operation you want to perform:\n");
  printf(" + , -,  *, /  ,s(sine) , c(cosine) , t(tangent)  ,l(ln) , L(log10)\n");
  scanf(" %c",&operations);
  
  if (operations=='s' || operations=='c'|| operations=='t'||operations=='L' || operations=='l'){
    printf("Enter the number: ");
    scanf("%f",&num1);
  }
  else{
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
  }
  switch(operations){
    case '+':
      result = num1 + num2;
      printf("result is %f\n", result);
      break;
    case '-':
      result = num1 - num2;
      printf("result is %f\n", result);
      break;
    case '*':
      result = num1 * num2;
      printf("result is %f\n", result);
      break;
    case '/':
       result = num1 / num2;
       printf("result is %f\n", result);
       break;
    case 's':
      result = sin(num1);
      printf("result is %f\n", result);
      break;
    case 'c':
      result = cos(num1);
      printf("result is %f\n", result);
      break;
    case 't':
      result = tan(num1);
      printf("result is %f\n", result);
      break;
    case 'l':
      result = log(num1);
      printf("result is %f\n", result);
      break;
    case 'L':
      result = log10(num1);
      printf("result is %f\n", result);
      break;
    default:
      printf("Please enter valid operation or may be the operation is not available in our calculator. Sorry for inconvenience");
      break;
  }
   printf("Do you want to repeat?(y/n):");
  scanf(" %c",&repeat);
  }while(repeat=='y' || repeat=='Y');
  return 0;
  
}
    
 


