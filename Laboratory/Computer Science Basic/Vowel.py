list = ['a','e','i','o','u']
a = input("Enter a Character...")
var = ""
for i in range(0,4):
    if a==list[i]:
        var= a
        break
    else:
       var="nope"
if var==a:
    print (a+" is A Vowel")
else:
    print (a+" is Not A Vowel")
