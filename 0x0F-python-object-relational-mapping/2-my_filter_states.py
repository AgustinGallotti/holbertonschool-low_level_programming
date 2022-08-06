#!/usr/bin/python3
"""
    module
"""

import MySQLdb
from sys import argv

#connection
if __name__ == '__main__':
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                        passwd=argv[2], db=argv[3], charset="utf8")
    cursor = db.cursor()
    cursor.execute("")
    rows = cursor.fetchall()
    for name in rows:
        print(name)
    cursor.close()
    db.close()
