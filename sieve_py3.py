def last_sqrt(x):
    n = 1
    sqr = 0
    while x>=sqr:
        sqr = sqr + ((2*n)-1)
        n+=1
    return n-2

list = []
n = int(input("Enter the Number:"))
for num in range(2,(n+1)):
    list.append(num)
for ltsqrt in range(0,(last_sqrt(n)-1)):
    if list[ltsqrt]!=0:
        for nums in range((ltsqrt+1),len(list)):
            if list[nums]!=0:
                if list[nums]%list[ltsqrt]==0:
                    list[nums]=0

for num in range(0,len(list)):
    if list[num]!=0:
        print(list[num])
# your code goes here