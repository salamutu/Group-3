from datetime import datetime

#added bugs mjbradfo

#creating a string variable to store a string value for the date and time 
String date_str = new String("2022-03-17 10:45:30") 

#creating an object variable that stores and converts time into a string by using the strptime function
date_obj = datetime.strptime(date_str, '%m-%Y-%d %H:%M:%S')

#creating a new variable that converts the value stored in date_obj into a string by using the strptime function 
formatted_date = date-obj.strftime('%m/%d/%Y %H:%M:%S')

#printing formatted date
print(formatted_date)
