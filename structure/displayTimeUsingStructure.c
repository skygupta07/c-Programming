#include <stdio.h>

typedef struct time_struct {
  int hour;
  int minute;
  int second;
}time_struct;

int main() {
  time_struct my_time;

  // Input values from the user
  printf("Enter the hour: ");
  scanf("%d", &my_time.hour);
  printf("Enter the minute: ");
  scanf("%d", &my_time.minute);
  printf("Enter the second: ");
  scanf("%d", &my_time.second);

  // Display the time in the desired format
  printf("my time is: \n");
  printf("%d:%02d:%03d", my_time.hour, my_time.minute, my_time.second);
  printf("\n");
  printf("%02d:%02d:%02d", my_time.hour, my_time.minute, my_time.second);


  // %03d ka matlab hai 3 digit ka number banao ussey agar nahi ban rha to aage 
  // zero laga do...

  return 0;
}

/*
Enter the hour: 5
Enter the minute: 45
Enter the second: 34
05:45:34
[Program finished]
*/