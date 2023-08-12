# ioT{6bt_nt4_f87d88}
flag = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸強㕤㐸㤸扽"
# solution = ''.join([chr((ord(flag[i]) << 8) + ord(flag[i + 1]))
#                     for i in range(0, len(flag), 2)])
print("Len:", len(flag))
for c in flag:
    mask = int("0000000011111111", 2)
    print(chr(ord(c) >> 8), end="")
    print(chr(ord(c) & mask), end="")
