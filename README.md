# String-Analyzer
This C program is designed to analyze a string entered by the user.

It counts the following:
1.Vowels: Both uppercase and lowercase.
2.Consonants: Alphabetic characters that are not vowels.
3.Digits: Numeric characters (0–9).
4.Spaces: Used to determine the number of words.
5.Special symbols: Characters that are not alphabetic, digits, or spaces.

Key Points and Observations:
1.Input Function gets: The program uses gets to read the input string, which is not safe due to buffer overflow vulnerabilities. Using fgets is safer and preferred.
2.Logic for Counting Words: It assumes words are separated by spaces. The number of words is derived by adding 1 to the space count. This works only if there are no leading, trailing, or consecutive spaces.
3.Efficiency: The program uses a switch statement to classify vowels, which is fine for small cases. However, it could be streamlined using tolower for case insensitivity and checking membership in a set of vowels.
4.Edge Cases: The program doesn't handle empty strings or strings with only spaces robustly. It will incorrectly assume at least one word due to space+1.
