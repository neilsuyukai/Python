import csv

# 開啟CSV文件
with open('csv1.csv', 'r') as file:
    reader = csv.reader(file)
    next(reader)  # 跳過標題行

    # 初始化變數
    data = []
    total = 0

    # 讀取每一行資料
    for row in reader:
        value = float(row[0])  # 假設CSV文件中只有一個欄位，且為數字
        data.append(value)
        total += value

    # 計算最大值
    max_value = max(data)

    # 計算最小值
    min_value = min(data)

    # 計算總和
    sum_value = total

    # 計算平均值
    avg_value = total / len(data)

    # 打印結果
    print("最大值:", max_value)
    print("最小值:", min_value)
    print("總和:", sum_value)
    print("平均值:", avg_value)
