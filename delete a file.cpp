#include <stdio.h>
int main()
{
  int status;
  char file_name[25];

  printf("Enter file name: \n");
  gets(file_name);

  status = remove(file_name);

  if (status == 0)
    printf("%s file deleted successfully.\n", file_name);
  else
  {
    printf("Unable to delete the file\n");
  }

  return 0;
}
