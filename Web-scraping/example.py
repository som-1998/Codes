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

print(soup.head.title.text)

# p = soup.find_all('h1')  ## p is a list

# for i in p :
#     print(i) 