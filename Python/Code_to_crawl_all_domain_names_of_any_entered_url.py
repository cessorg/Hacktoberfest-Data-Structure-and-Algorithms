from bs4 import *
from pymysql import *
import lxml
import requests
# the following link is used if you have saved links in the data base and you want to run those urls to save the
# corresponding links in the database
conn = connect("127.0.0.1", "root", '', "dnc")
s = "select * from website_links "
cr = conn.cursor()
cr.execute(s)
x = cr.fetchall()
# l=0
# while l==0:
#     cr = conn.cursor()
#     cr.execute(s)
#     x = cr.fetchone()
# if you want to enter the url manually then you just have to remove the following "for p in x:" loop and write the url
# in the url variable.
for p in x:
    url = p
    r = requests.get(url)
    soup = BeautifulSoup(r.content,"lxml")
    for link in soup.findAll('a'):
        c = link.get('href')
        q ="insert into website_links values('"+c+"')"
        conn = connect("127.0.0.1", "root", '', "dnc")
        cr = conn.cursor()
        cr.execute(q)
        conn.commit()
        conn.close()
