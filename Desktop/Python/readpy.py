import shutil

# 指定原始圖檔的路徑和名稱
original_jpg = 'a.jpg'
original_png = 'a.png'

# 指定目標圖檔的路徑和名稱
target_jpg = 'a2.jpg'
target_png = 'a2.png'

# 複製圖檔
shutil.copyfile(original_jpg, target_jpg)
shutil.copyfile(original_png, target_png)

print('圖檔複製完成')
