a=input("Enter a string: ")
count1 = 0
count2 = 0
for i in a:
    if i in 'aeiouAEIOU':
        count1 += 1
    else:
        count2 += 1

print("Number of consonants in the string:", count2)
