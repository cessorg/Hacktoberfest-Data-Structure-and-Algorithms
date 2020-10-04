from stack import Stack


def is_match(p1, p2):
    if p1 == "(" and p2 == ")":
        return True
    elif p1 == "{" and p2 == "}":
        return True
    elif p1 == "[" and p2 == "]":
        return True
    else:
        return False

def is_paren_balanced(pString):
    s = Stack()
    is_balanced = True
    index = 0
    while index<len(pString) and is_balanced:
        ch = pString[index]
        if ch in "[{(":
            s.push(ch)
        else:
            if s.is_empty():
                is_balanced = False
            else:
                top = s.pop()
                if not is_match(top,ch):
                    is_balanced = False
        index = index + 1
    if s.is_empty() and is_balanced:
        return True
    else:
        return False
        
print("String : (((({})))) Balanced or not?")
print(is_paren_balanced("(((({}))))"))

print("String : [][]]] Balanced or not?")
print(is_paren_balanced("[][]]]"))

print("String : [][] Balanced or not?")
print(is_paren_balanced("[][]"))
