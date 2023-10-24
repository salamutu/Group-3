#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    //String containing the date and time of the program
    std::string date_str = "2022-03-17 10:45:30"; 
    //Date object 
    std::tm date_obj = {};
    //Open the input stream and push the date_str to it
    std::istringstream ss(date_str);
    //Use the get time function and initialize the date
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    //Create a formatted date stream
    std::stringstream formatted_date_ss;
    //Create a place to initialize formatted date
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    //Convert to string
    std::string formatted_date = formatted_date_ss.str();
    //Print out the formatted date
    std::cout << formatted_date << std::endl;

    return 0;
}
