while True:
count = 0
number = int(input("Enter a integer"))
while (number > 1):
  number = number//10
  count = count + 1
print ("Total number of digits : ",count)
