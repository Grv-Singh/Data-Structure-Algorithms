a = int(input("No.1"))
b = int(input("No.2"))
c = int(input("No.3"))
if a>b:
    if a>c:
        print("A IS THE LARGEST")
        if b>c:
            print("B COMES SECOND")
            print("C COMES LAST")
        else:
            print("C COMES SECOND")
            print("B COMES LAST")
    else:
        print("A COMES SECOND")
        print("B COMES LAST")
