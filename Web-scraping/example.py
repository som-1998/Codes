import requests

from bs4 import BeautifulSoup

file_path = "D:\GitHub\Codes\Web-scraping\index.html"

with open(file_path, 'r') as f :
    responace = f.read()

soup = BeautifulSoup(responace, 'html.parser')

# print(soup.prettify())
# print(soup.head)
# print(soup.head.prettify())

# print(soup.body.h1)  ## only prints the first instance

# print(soup.body.ul.text)
print(item for item in soup.body.ul.find_all('li'))
# for item in soup.body.ul.find_all('li'):
#     print(item.text)

# p = soup.find_all('h1')  ## p is a list

# for i in p :
#     print(i) 