string = "w1{1wq8/7376j.:"
new_string = ""

for i, char in enumerate(string):
    if i & 0x1 != 0:
        new_string += chr(ord(char) + 2)
    else:
        new_string += chr(ord(char) - 5)

print(new_string)
