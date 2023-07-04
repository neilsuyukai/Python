import json

# 讀取 JSON 檔案
with open('ex1.json', 'r') as file:
    dic01 = json.load(file)

# 印出 dic01 字典
print(dic01)
