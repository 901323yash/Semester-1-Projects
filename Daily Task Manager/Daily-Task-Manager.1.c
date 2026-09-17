#include <stdio.h>
#include <string.h>

#define max_tasks 5
#define task_len 100

int main(){
 char tasks[max_tasks][task_len];
 int taskcount = 0;
 int choice;

 do{
  printf("\n-- DAILY TASK MANAGER ---\n");
  printf("1.View Task\n");
  printf("2.Add Task\n");
  printf("3.Exit\n");

  printf("Enter you choice: ");
  scanf("%d",&choice);

  while(getchar() != '\n');

  switch(choice){

   case 1: if(taskcount == 0){
    printf("\nNo tasks added yet.\n");
   }else{
    printf("\nYour Task: \n");
    for(int i=0; i<taskcount; i++){
     printf("%d. %s\n",i+1,tasks[i]);
    }
   }
   break;

   case 2: if(taskcount < max_tasks){
    printf("Enter task description: ");
    fgets(tasks[taskcount],task_len, stdin);
    tasks[taskcount][strcspn(tasks[taskcount],"\n")] =0;
    taskcount++;
    printf("Task added successfully!\n");
   }else{
    printf("Task list is full! (max %d)\n",max_tasks);
   }
   break;

   case 3: printf("Exiting application. Keep building!\n"); break;

   default: printf("Invalid choice. Try again.\n");
  }
 }
 while(choice != 3);

 return 0;
}
