 #include <stdio.h>
int main() {
int n_students ;
int n_subjects ;
printf(" enter the no of students\n");
scanf(" %d" , &n_students);
printf(" enter the no of subjects\n");
scanf(" %d" , &n_subjects);
int marks[n_students][n_subjects];
for(int i = 0;  i<n_students ; i++){
    for( int j = 0 ; j<n_subjects  ; j++){
        printf(" Enter the value of marks of student %d in subjects is %d\n" , i+1 , j+1 , marks[i][j] );
        scanf("%d" , &marks[i][j]);
    }
}

for(int i = 0;  i<n_students ; i++){
    for( int j = 0 ; j<n_subjects  ; j++){
        printf("  value of marks of student %d in subjects is %d is %d\n" , i+1 , j+1 , marks[i][j]);
        
    }

}
return 0;
}