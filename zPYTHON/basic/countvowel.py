a=input("enetr the word: ")
count =0
for i in a:
    if i in 'aeiouAEIOU':
        count += 1
print("Number of vowels in the word:", count)