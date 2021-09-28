#Task: print out the numbers 1 to 100
#If a number is divisible by 3 then your program should print ‘Fizz’. If a number is divisible by 5 then your program should print ‘Buzz’. 
#If a number is divisible by both 5 and 3 (e.g., 15) then your program should print ‘FizzBuzz’

for num in range(1, 101):
  #the order of the branches is VERY important!!!!!1
  if num % 3 == 0 and num % 5 == 0 :
    print("FizzBuzz")
  elif num % 3 == 0 :
    print("Fizz")
  elif num % 5 == 0 :
    print("Buzz")
  else :
    print(num)
