import json

# 讀取JSON字串檔案並轉換為字典
with open('jfile.txt', 'r') as file:
    json_data = file.read()
    dic = json.loads(json_data)

# 印出key s9裡面的字典的key 4對應的數值
if 's9' in dic:
    s9_dict = dic['s9']
    if '4' in s9_dict:
        value = s9_dict['4']
        print(value)
    else:
        print("Key '4' not found in s9 dictionary.")
else:
    print("Key 's9' not found in the dictionary.")
