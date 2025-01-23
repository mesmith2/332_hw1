
# CS 332
# how to compile: gcc -o mesmith2_HW01 mesmith2_HW01.c
# how to run: ./mesmith2_HW01

# functions initialized  before main()
# main function prompts user to enter input for each function, then calls function on users input and will print output.

# primeOrFactorial() returns char*, pointer to the characters being returned, and takes an int n as input;
# use if else loops for cases: n <= 1; n is prime; n!
# local var. bool prime is used for declaring if n is prime, after calculating if prime w/ for loop, if = true, returns "Prime Number" 
# return "invalid input" for n <= 1;  
# if none of the above, else statement will calculate n factorial and cast int to char[] using sprintf(), returning the factorial as char[]

# UABIndexSum() takes an int array as input and returns an int. 
# calculates how many array elements are equal to their index using a while loop to itterate through the input array
# and a local var. int counter, incrementing counter by one when an element is = to its index.   

# replaceEvenWithZero() takes an int* array as input and returns a new int array[]. in main, user is promted to enter
# how many array elements they would like to enter, then prompted to enter such elements. function is then called to replace even numbers with zeros; within function: static int b[] initialized for return value, using for loop to itterate through original array, calculate if current array element is even, if even, set b[current index value] = 0, else original array contents will be copied to b[]. b is static, otherwise there would not be a valid pointer to memory location to be returned 

# evenSqaure() takes an integer n as input, and returns a boolian true or false. The input int is sqaured, n*n, if the product is even funtion returns true, else the product is odd function returns false. 

# countVowels() takes a string of chars as input, and returns the output as an int representation number of vowels in # string. in main: prompts user to enter string, uses fgets() to read in string into var. s. implemented getchar() after previous scanf()'s to clear the input buffer. deleted last character of string if the character was a new line. within countVowels function, calculate the length of input string, itterate through input string with for loop with int i starting at 0, constraint i < length of input str., compare each element of str to vowel characters, increment local var. count when element = vowel.  

# rep. link : https://github.com/mesmith2/332_hw1