import hashlib

key_part_static1_trial = "picoCTF{1n_7h3_|<3y_of_"
username_trial = b"SCHOFIELD"
# print(hashlib.sha256(username_trial).hexdigest())
order = [4, 5, 3, 6, 2, 7, 1, 8]
for j in order:
    print(hashlib.sha256(username_trial).hexdigest()[j], end = " ")


def main():
    global key_part_static1_trial
    global username_trial
    key = ""
    i = 0
    for c in key_part_static1_trial:
        if key[i] != c:
            return False
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[4]:
            return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[5]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[3]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[6]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[2]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[7]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[1]:
        return False
    else:
        i += 1

    if key[i] != hashlib.sha256(username_trial).hexdigest()[8]:
        return False
    