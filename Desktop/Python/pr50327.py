str = 'abcdefghijklmnopqrstuvwxyz'
s = input()

if s in str:
    idx = str.index(s)
    print(str[idx:idx+5])
"""else:"""
"""print("輸入的字符不在字串中")"""
