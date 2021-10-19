import colored

# decoration
print(colored.stylize(
    "\n---- | Morse code encoding/decoding | ----\n", colored.fg("red")))

# morse code dictionary
char_to_morse = {
    'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.', 'F': '..-.',
    'G': '--.', 'H': '....', 'I': '..', 'J': '.---', 'K': '-.-', 'L': '.-..',
    'M': '--', 'N': '-.', 'O': '---', 'P': '.--.', 'Q': '--.-', 'R': '.-.',
    'S': '...', 'T': '-', 'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-',
    'Y': '-.--', 'Z': '--..', ' ': ' ', '0': '-----',
    '1': '.----', '2': '..---', '3': '...--', '4': '....-', '5': '.....',
    '6': '-....', '7': '--...', '8': '---..', '9': '----.',
    '&': '.-...', "'": '.----.', '@': '.--.-.', ')': '-.--.-', '(': '-.--.',
    ':': '---...', ',': '--..--', '=': '-...-', '!': '-.-.--', '.': '.-.-.-',
    '-': '-....-', '+': '.-.-.', '"': '.-..-.', '?': '..--..', '/': '-..-.'
}

# functions


def encode(msg):
    new_msg = ""
    for i in msg:
        if i == " ":
            new_msg += i
        else:
            new_msg += char_to_morse[i]
            if i != msg[-1]:
                new_msg += " "
    return new_msg


def decode(msg):
    new_msg = ""
    key_list = list(char_to_morse.keys())
    val_list = list(char_to_morse.values())
    for i in msg.split(" "):
        if i == "":
            new_msg += " "
        else:
            new_msg += key_list[val_list.index(i)]
    return new_msg


# options
print(colored.stylize("Options: ", colored.fg("green")))
print("> 'e' for encoding message\n> 'd' for decoding morse code message\n")

# user interaction
user_choice = input(": ")

# main program
if user_choice == "e":
    input = input("\nPlease enter your message to encode: ").upper()
    enc_msg = colored.stylize(encode(input), colored.fg("red"))
    print(f"\nEncoded message: {enc_msg}\n")
elif user_choice == "d":
    input = input("\nPlease enter your morse to decode: ").upper()
    dec_msg = colored.stylize(decode(input), colored.fg("red"))
    print(f"\nDecoded message: {dec_msg.lower()}\n")
else:
    print("\nInvalid input\n")
