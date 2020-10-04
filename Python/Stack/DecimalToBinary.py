from stack import Stack


def convert_int_to_bin(dec_num):
    if dec_num==0:
        return 0
    s = Stack()
    while dec_num!=0:
        rem = dec_num%2
        s.push(rem)
        dec_num = dec_num//2
    bin_num = ""
    while not s.is_empty():
        bin_num = bin_num + str(s.pop())
    return bin_num
    
print(convert_int_to_bin(56))
print(convert_int_to_bin(2))
print(convert_int_to_bin(32))
print(convert_int_to_bin(10))

print(int(convert_int_to_bin(56),2)==56)
