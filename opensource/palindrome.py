#himanshulenka
# This program performs palindrome check for a number 


Number = input("Enter the number to be verified :" )
   val = int(Number)
    #checking for a palindrome in the given string
    if Number == str(Number)[::-1]:
        print('The given number is PALINDROME')
    else:
        print('The given number is NOT a PALINDROME')
except ValueError:
    print("! ! ! A valid numeric input is not entered ! ! !")