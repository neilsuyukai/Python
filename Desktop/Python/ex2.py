import json

# 讀取 JSON 檔案
with open('ex1.json', 'r') as file:
    dic01 = json.load(file)

# 印出 dic01 字典
print(dic01)


def print_all_keys(dictionary):
    for key, value in dictionary.items():
        print(key)
        if isinstance(value, dict):
            print_all_keys(value)


# 呼叫遞迴函式印出所有鍵
# print_all_keys(dic01)


def print_all_keys_and_values(dictionary):
    for key, value in dictionary.items():
        print(f"Key: {key}")
        if isinstance(value, dict):
            print_all_keys_and_values(value)
        else:
            print(f"Value: {value}")


# 呼叫遞迴函式印出所有鍵和值
# print_all_keys_and_values(dic01)
