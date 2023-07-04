import xml.etree.ElementTree as ET

# XML內容
xml_content = '''
<class>
  <morning time="8:00-12:00">上午課程<item time="8:10-10:00" where="電腦教室">電腦</item>
    <item time="10:10-12:00">英文</item>
  </morning>
  <afternoon time="13:00-17:00">下午課程<item time="13:10-14:00" where="操場">體育</item>
    <item time="14:10-16:00">數學</item>
    <item time="16:10-17:00">地理</item>
  </afternoon>
</class>
'''

# 解析XML內容
root = ET.fromstring(xml_content)

# 找到第一個item標籤並印出text
first_item = root.find('.//item')
if first_item is not None:
    print(first_item.text)
else:
    print("找不到item標籤")
