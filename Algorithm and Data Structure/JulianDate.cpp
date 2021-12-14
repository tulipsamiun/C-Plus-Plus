#include <iostream>

using namespace std;

int main()
{
    int julianDate, month, day, year;
    printf("Enter The Year = ");
    scanf("%d", &year);
    printf("Enter The Month = ");
    scanf("%d", &month);
    printf("Enter day = ");
    scanf("%d", &day);
    julianDate = day;
    if (month  > 1){
        julianDate = julianDate + 31;
        if (month > 2){
            if(year % 2 == 0)
                julianDate =  julianDate + 29;
            else
                julianDate = julianDate + 28;
            if (month  > 3){
                julianDate = julianDate + 31;
                if (month  > 4){
                    julianDate = julianDate + 30;
                    if (month  > 5){
                        julianDate = julianDate + 31;
                        if (month  > 6){
                            julianDate = julianDate + 30;
                            if (month  > 7){
                                julianDate = julianDate + 31;
                                if (month  > 8){
                                    julianDate = julianDate + 31;
                                    if (month  > 9){
                                        julianDate = julianDate + 30;
                                        if (month  > 10){
                                            julianDate = julianDate + 31;
                                            if (month > 11){
                                                julianDate = julianDate+30;
                                            }
                                        }   
                                        
                                    }    
                                    
                                }      
                                
                            }    
                            
                        }    
                        
                    }
                }
            }
        }
        
    }
    printf("Julian Date = %d", julianDate);
    return 0;
}
