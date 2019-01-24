print("Guess the number asshole")

import random
#create a random variable
var1 = random.randint(1,101)
#print(var1)
#set our loop value to zero
x = 0

answer = input("Would you like help? ")

#ask if you want help or not
#help = tell them how much theyre off by
if (answer == "yes" or answer == "Yes"):
	#loop so users can retry
	while (x != 1):
		print("input a number asshole: ")
		guess = int(input())

		print()
		print("the assholes guess is: ", guess)

		#if/else for if guess is correct / incorrect
		if (guess == var1):
			print("Correct!")
			#change x value to end loo
			x = 1
			
		elif(guess < var1):
			print("off by ",var1-guess)
			

		elif(guess > var1):
			print("off by ", guess - var1)
		
		else:
			print("not sure wtf happened lol")

else:
	#loop so users can retry
	while (x != 1):
		print("input a number asshole: ")
		guess = int(input())

		print()
		print("the assholes guess is: ", guess)

		#if/else for if guess is correct / incorrect
		if (guess == var1):
			print("Correct!")
			#change x value to end loo
			x = 1
			
		elif(guess < var1):
			print("less than")

		elif(guess > var1):
			print("greater than")
		
		else:
			print("not sure wtf happened lol")
