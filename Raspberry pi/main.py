def main():
	print("Insert the first number: ")
	first = eval(input())
	print("Insert the second number: ")
	second = eval(input())
	print("Insert the third number: ")
	third = eval(input())
   
   lst = [first, second, third]
   sort(lst)
	print(lst)
 
main()