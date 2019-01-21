stack = []
def pushit():
    stack.append("A")
def popit():
    if len(stack) == 0:
        print 'Cannot pop from an empty stack!'
    else:
        print 'Removed [', 'stack.pop()', ']'
def viewstack():
    print stack # calls str() internally
pushit()
viewstack()
popit()
viewstack()
