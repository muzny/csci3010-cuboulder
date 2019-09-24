
# Adds to values together
# Params:
# v1 - first value
# v2 - second value
# Returns the result of adding v1 to v2
def add(v1, v2):
    return v1 + v2


# Adds a given amount to every value in a list
# Params:
# v1 - a list of elements
# v2 - the value to add to every element in the list
# Return - no return value, the list is modified in place
def add_to_values(v1, v2):
    for i in range(len(v1)):
        v1[i] += v2 
