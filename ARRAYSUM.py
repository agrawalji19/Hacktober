limit=int(input("Enter the list limit: "))
list1=[]
list2=[]
for i in range(limit):
    n=int(input("> "))
    list1.append(n)
for i in range(limit):
    n=int(input("> "))
    list2.append(n)

newlist=[]

for i in range(len(list1)):
    sum=0
    sum=list1[i]+list2[i]
    newlist.append(sum)
print(newlist)
