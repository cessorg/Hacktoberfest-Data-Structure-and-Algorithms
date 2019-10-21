'''While in Python 2, we used the update() method to merge two dictionaries; Python 3.5 made the process even simpler.
In the script given below, two dictionaries are merged. Values from the second dictionary are used in case of intersections.'''

dict_1 = {'apple': 9, 'banana': 6}
dict_2 = {'banana': 4, 'orange': 8}

combined_dict = {**dict_1, **dict_2}

print(combined_dict)
# Output
# {'apple': 9, 'banana': 4, 'orange': 8}
