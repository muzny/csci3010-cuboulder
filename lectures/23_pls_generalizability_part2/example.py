
def add(v1, v2):
    return v1 + v2

print(add(3, 6))
print(add("3", "6"))
print(add(4, True))
print(add(4, 5.7))

def add_to_values(v1, v2):
    for i in range(len(v1)):
        v1[i] += v2 
