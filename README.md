
Number to Text Converter in C is a great exercise to understand string manipulation, number processing
, and basic input/output operations. Below is a simple implementation of a C program that converts
 numbers to their textual representation and vice versa.
 This program does not use an external API but instead relies on basic C programming constructs.
===================================================

Explanation of the Code:

    Number to Text Conversion:

        The numberToText function breaks the number into groups of three digits (units, thousands, millions, etc.).

        It uses arrays (units, teens, tens, scales) to map numbers to their textual representations.

        The result is constructed by concatenating the words for each group.

    Text to Number Conversion:

        The textToNumber function processes the input text word by word.

        It maps words to their numeric equivalents and calculates the final number by considering scales (thousands, millions, etc.).

    Main Function:

        The user is prompted to choose between converting a number to text or text to a number.

        Based on the choice, the corresponding function is called.

===========================================================
This program supports numbers up to the trillions range.
