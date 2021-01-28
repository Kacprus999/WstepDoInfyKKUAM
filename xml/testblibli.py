import xml.etree.ElementTree as ET



tree = ET.parse('test2.xml')
root = tree.getroot()



for child in root.iter("title"):
#t *= int(child.text)
print(child.text)