a=map(int,input("Enter numbers separated by space: ").split())
product=0
for i in a:
    if product == 0:
        product = i
    else:
        product *= i
print("Product of elements in the list is:", product)
# This code calculates the product of elements in a list of numbers provided by the user.