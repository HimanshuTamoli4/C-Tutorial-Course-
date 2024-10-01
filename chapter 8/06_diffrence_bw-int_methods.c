 #include <stdio.h>
int main() {
char ptr[] = "Himanshu ";
///ptr = "shbham bhai";  // ==> this is invalid this will not run
  printf(" %s" , ptr );
return 0;
}

 #include <stdio.h>
int main() {
char *ptr = "Himanshu ";
ptr = "shbham bhai";  // ==> this is valid this will  run
  printf(" %s" , ptr );
return 0;
}





