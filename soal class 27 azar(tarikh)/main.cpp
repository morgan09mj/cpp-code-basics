#include <iostream>
using namespace std;
int main(){
    int birth_year,birth_month,birth_day,current_year,current_month,current_day,year,month,day;
    char slash;
    cin>>birth_year>>slash>>birth_month>>slash>>birth_day;
    cin>>current_year>>slash>>current_month>>slash>>current_day;
    day = current_day - birth_day;
    if (current_day < birth_day){
        if(current_month<=6){
            day += 31;
        }else{
            day += 30;
        }
        current_month--;
    }
    month = current_month - birth_month;
    if (current_month < birth_month){
        month += 12;
        current_year--;
    }
    year = current_year - birth_year;
    if (year < 0){
        year = 0;
    }
    cout<<year<<" years "<<month<<" months "<<day<<" days old"<<endl;
    if (year>=12 && (month>0 || day >0)){
        cout<<"Adult";
    }else{
        cout<<"Child";
    }
    return 0;
}
