space=" "
star="*"
i = w = int(input("No. Of Rows?"))
for x in range(1,i+1,1):
    print ((space*(w-1))+(star*((2*x)-1))+"\n")
    w=w-1
