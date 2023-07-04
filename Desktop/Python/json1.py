import json

dic1 = {x: chr(x) for x in range(65, 90) if x % 2 == 0}

# 寫入 JSON 檔案
with open('output.json', 'w') as file:
    json.dump(dic1, file, indent=4)

# 開啟並顯示 JSON 檔案內容
with open('output.json', 'r') as file:
    content = file.read()
    print(content)
