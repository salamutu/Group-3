from datetime import datetime

#creating a string variable to store a string value for the date and time 
date_str = "2022-03-17 10:45:30"

#creating an object variable that stores and converts time into a string by using the strptime function
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')

#creating a new variable that converts the value stored in date_obj into a string by using the strptime function 
formatted_date = date_obj.strftime('%m/%d/%Y %H:%M:%S')

#printing formatted date
print(formatted_date)
