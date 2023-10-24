def rgb_to_hex(r, g, b):
    # create the hex value for red
    r = max(0, min(255, r))
    # create the hex value for green
    g = max(0, min(255, g))
    # create the hex value for blue
    b = max(0, min(255, b))
    # combine all hex values in a string and return the value
    return '{:02X}{:02X}{:02X}'.format(r, g, b)


# test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
