from itertools import permutations

def combinations(string):
    number_str = string
    perm = permutations(number_str)
    result = list(set([(''.join(p))for p in perm]))

    return sorted(result)

string = input()
comb = combinations(string)
index = comb.index(string)+1
if index < len(comb):
    print(comb[index])
else:
    print(0)