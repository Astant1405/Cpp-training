#include <iostream>

class Date{
private:
    int day;
    int month;
    int year;

    int Date::Leap(int year){
        bool status = false;
        int days = 28;
        if(year % 100 == 0 && year % 400 == 0){
            status = true;
        }
        else if(year % 4 == 0 && year % 100 != 0){
            status = true;
        }
        if(status == true){
            days = 29;
        }
        return days;
    }

    int Date::Month(int month, int year){
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            return Leap(year);
            break;
        default:
            return 30;
            break;
        }
    }

    bool Date::Validate(){
        return  0 < GetDay() < 32 && 0 < GetMonth() < 13 && 1969 < GetYear() < 2100;
    }

public:
    Date(int day, int month, int year){
        if(!Validate){
            day = 1;
            month = 1;
            year = 1970;
        }
    }
    int Date::GetDay() const{
        return day;
    }

    int Date::GetMonth() const{
        return month;
    }

    int Date::GetYear() const{
        return year;
    }
    Date Date::operator + (int d){
        Date res(day, month, year);
        res.day += d;
        while(res.day > Month(res.month, res.year)){
            res.day = res.day - Month(res.month, res.year);
            res.month++;
            if(res.month > 12){
                res.year++;
                res.month -= 12; 
                //Date(res. day, res.month, res.year);
            }
        }
    }

    Date Date::operator - (int d){
        Date res(day, month, year);
        res.day -= d;
        while(res.day < 1){
            res.day = Month(res.month, res.year) + res.day;
            res.month--;
            if(res.month < 1){
                res.year--;
                res.month += 12;
                //Date(res. day, res.month, res.year);
            }
        }
    }
    int Date::operator - (const Date& d){
        Date res(day, month, year);
        int days = 0;
        while(res.day != d.day || res.month != d.month || res.year != d.year){
            res.day--;
            days++;
            if(res.day < 1){
                res.month--;
                if(res.month < 1){
                    res.year--;
                    res.month += 12;
                }
                res.day = Month(res.month, res.year);
            }
            //Date(res. day, res.month, res.year);
        }
    }   
};

int main(){
    Date d(15, 1, 2022);
    Date d2(22, 9, 2011);
    std::cout << d - d2;
    return 0;
}
