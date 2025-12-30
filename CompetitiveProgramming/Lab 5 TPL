flag = False
N = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0']
inp = raw_input("Input Rule:")
prod = inp[(inp.index("->")+2):]
print(prod)
for i in range(len(prod)):
    if prod[i] == inp[0]:
        flag = True
    else:
        flag = False

if flag == True:
    print("It's a Left Recursive!\n")
if flag == False:
    print("It's not a Left Recursive!\n")
