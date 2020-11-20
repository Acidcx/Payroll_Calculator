//PayRoll


#include <iostream>
using namespace std;

int main()
{

    
    double P_rate;
    double Hours;
    double Total;
    double Reg_pay;
    double time_half;
    double double_time;
    
    
    cout <<"Please enter the hourly pay rate: ";
    cin >> P_rate;

    cout <<"How many hours were worked? (or a negative number to quit): ";
    cin >> Hours;
       
    while(Hours > 0) {
        

       if (Hours < 37){
           Reg_pay = Hours * P_rate;
           Total = Reg_pay;
           cout << "You did not qualify for Time and a half or double time. \nThe total pay earned is: " << Total << "\n\n\n" << endl; 
           double P_rate = 0;
           double Hours = 0;
           double Total = 0;
           double Reg_pay = 0;
           double time_half = 0;
           double double_time = 0; 
        }
        else if (Hours > 37 && Hours < 50){
            Reg_pay = Hours * P_rate;
            time_half = (Hours - 37) * (P_rate * 1.5);
            Total = Reg_pay + time_half;
            cout << "You qualified for time and a half!!! \nYou did not qualify for double time. \nThe total pay earned is: " << Total << "\nThe total time and a half earned is: " << time_half << "\n\n\n" << endl; 
            double P_rate = 0;
            double Hours = 0;
            double Total = 0;
            double Reg_pay = 0;
            double time_half = 0;
            double double_time = 0;
        }
        else if (Hours > 50){
            Reg_pay = Hours * P_rate;
            time_half = (Hours - 37) * (P_rate * 1.5);
            double_time = (Hours - 50) * (P_rate * 2);
            Total = Reg_pay + time_half + double_time;
            cout << "You qualified for time and a half!!! \nYou also qualified for double time!!! \nThe total pay earned is: " << Total << "\nThe total time and a half earned is: " << time_half << "\nThe total double time earned is: " << double_time << "\n\n\n" << endl; 
            double P_rate = 0;
            double Hours = 0;
            double Total = 0;
            double Reg_pay = 0;
            double time_half = 0;
            double double_time = 0;
        }

     cout <<"Please enter the hourly pay rate: ";
     cin >> P_rate;

     cout <<"How many hours were worked?(or a negative number to quit): ";
     cin >> Hours;
        
    }
    


    return 0;
