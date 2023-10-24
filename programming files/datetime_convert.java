import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
//Create a class for converting date and time
public class datetime_convert {
    //Create main class
    public static void main(String[] args) {
        //Create a string of an initial date
        String dateStr = "2022-03-17 10:45:30";
        //Create formatter object and initialize it with a date format pattern
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        //Create a date object and pass string
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        //Format the object
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));
        //Print the date
        System.out.println(formattedDate);
    }
}
