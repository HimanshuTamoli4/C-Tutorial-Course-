 #include <stdio.h>
 #include <time.h>
 typedef struct timestamp{
   int date ;
    int month;
    int year ;
    
    int hour  ;
    int min;
    int sec ;
    
 }timestamp;

void display(timestamp dt){
printf("the timestamp  is : %d/%d/%d/%d:%d:%d\n" , dt.date , dt.month , dt.year ,dt.hour  , dt.min , dt.sec);
}

int timestampcmp(timestamp dt1 , timestamp dt2){
      if(dt1.year > dt2.year){
        return 1;
    }
     if(dt1.year < dt2.year){
        return -1;
    }

     if(dt1.month > dt2.month){
        return 1;
    }
     if(dt1.month < dt2.month){
        return -1;
    }
 if(dt1.date > dt2.date){
        return 1;
    }
     if(dt1.date < dt2.date){
        return -1;
     }
    if(dt1.hour > dt2.hour){
        return 1  ;
    }
     if(dt1.hour < dt2.hour){
        return -1;
    }

     if(dt1.min > dt2.min){
        return 1;
    }
     if(dt1.min < dt2.min){
        return -1;
    }
 if(dt1.sec  > dt2.sec ){
        return 1;
    }
     if(dt1.sec  < dt2.sec ){
        return -1;
     }
     return 0 ;  // if date , month , yearhour  ,minutes , seconds are equal that means time  is equal and then return 0
     }

int main() {
timestamp  dt1 = {2,11,21 ,4,10,12 };
timestamp  dt2 = {4,10,30 ,7,8,16};


display(dt1);
display(dt2);
int a = timestampcmp(dt1 , dt2);
printf("time comparasion function returns : %d" , a);
return 0;
}