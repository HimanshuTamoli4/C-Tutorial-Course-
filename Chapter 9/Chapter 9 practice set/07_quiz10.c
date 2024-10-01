 #include <stdio.h>
 typedef struct time{
    int hour  ;
    int min;
    int sec ;
    
 }time;

void display(time t){
printf("the time  is : %d/%d/%d\n" , t.hour  , t.min , t.sec);
}

int timecmp(time t1 , time t2){
    if(t1.hour > t2.hour){
        return 1 ;
    }
     if(t1.hour < t2.hour){
        return -1;
    }

     if(t1.min > t2.min){
        return 1;
    }
     if(t1.min < t2.min){
        return -1;
    }
 if(t1.sec  > t2.sec ){
        return 1;
    }
     if(t1.sec  < t2.sec ){
        return -1;
     }
     return 0 ;  // if hour  ,minutes , seconds are equal that means time  is equal and then return 0
     }

int main() {
time  t1 = {2,11,21};
time  t2 = {4,10,30};


display(t1);
display(t2);

int a = timecmp(t1 , t2);
printf("time comparasion function returns : %d" , a);
return 0;
}