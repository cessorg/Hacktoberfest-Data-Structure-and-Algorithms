# Python3 program for the above approach
 
# Function to check sum
# of digit using tail recursion
def sum_of_digit(n, val):
     
    if (n < 10):
        val = val + n
        return val
         
    return sum_of_digit(n // 10, (n % 10) + val)
 
# Driver code
num = 12345
result = sum_of_digit(num, 0)
 
print("Sum of digits is", result)
