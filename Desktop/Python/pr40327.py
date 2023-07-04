str1 = "this is an apple"
str2 = "that is an orange"
s01 = set(str1)
s02 = set(str2)

n = int(input())

if n == 1:
    intersection_length = len(s01 & s02)
    """"print("兩個集合的交集的長度為：", intersection_length)"""
    print(intersection_length)
elif n == 2:
    union_length = len(s01 | s02)
    """print("兩個集合的聯集的長度為：", union_length)"""
    print( union_length)
"""else:"""
"""print("輸入的數字不是1或2")"""
"""print("輸入的數字不是1或2")"""
