#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){

    string dayName;
    
    // switch works exactly like you would expect it to
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day";
            break;
    }
    
    return dayName;

}
int main()
{
    int dayOfWeek;
    do{
    
        cout << "Please put the number of a day of the week: ";
        cin >> dayOfWeek;
    
    }while(dayOfWeek < 0 || dayOfWeek > 6);
    
    cout << getDayOfWeek(dayOfWeek) << endl;

    return 0;
}