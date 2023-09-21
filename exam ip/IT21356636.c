
#include <stdio.h>//header file

int main(void) {

  int students;//declare variables

  printf("How many Students are in the module : ");
  scanf("%d",&students);

  for(int i = 1; i <= students; i++){
    printf("Enter the mark of Student %d (between 0 - 10): \n",i);//get students marks
    
    int marks[3], total = 0;
      for(int j = 1; j <= 3; j++){
        printf("\tmark %d: ",j);
        scanf("%d",&marks[i-1]);

        total = total + marks[i-1];

      }
      printf("total marks - %d\n\n",total);//print total marks
  }
  
  return 0;
}	
