word=input("ENTER A CHARACTER= ")
pal=""
for i in range(len(word)-1,-1,-1):
    pal=pal+word[i]
print(pal)
if pal==word:
    print("Palindrome")
else:
    print("Not Palindrome")