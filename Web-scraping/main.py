import requests
from bs4 import BeautifulSoup

url = requests.get("https://www.cricbuzz.com/live-cricket-scores/95982/ind-vs-ban-15th-match-icc-mens-t20-world-cup-warm-up-matches-2024")


## url.text or url.content(content gives the text int bite code format)
text = url.text

soup = BeautifulSoup(text  , "html.parser")

print(soup.prettify())