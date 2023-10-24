public class rgb_to_hex {
    public static void main(String[] args) {
        //Set values
        int r = 255;
        int g = 127;
        int b = 0;

        //Calls function
        String hexColor = rgbToHex(r, g, b);
        //Prints out the values
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }
    //Functiont that converts the rgb values to the hex values
     public static String rgbToHex(int r, int g, int b) {
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));

         //returns the values
        return String.format("%02X%02X%02X", r, g, b);
    }
}

//Test with RGB color (255, 127, 0) = FF7F00


