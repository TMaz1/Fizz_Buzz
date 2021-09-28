--Task: print out the numbers 1 to 100
--If a number is divisible by 3 then your program should print ‘Fizz’. If a number is divisible by 5 then your program should print ‘Buzz’. 
--If a number is divisible by both 5 and 3 (e.g., 15) then your program should print ‘FizzBuzz’

fizzbuzz :: Int -> String
fizzbuzz x  | mod x 3 == 0 && mod x 5 == 0 = "fizzbuzz"
            | mod x 3 == 0 = "fizz"
            | mod x 5 == 0 = "buzz"
            | otherwise = show x -- show: converts argument to a string


main :: IO()
main = print (map fizzbuzz [1..100]) --apply fizzbuzz function to all values in list