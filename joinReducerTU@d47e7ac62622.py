#!/usr/bin/python
import sys
import string

last_user_id = None
cur_location = "-"

for line in sys.stdin:
    line = line.strip()
    user_id, loc_or_product_id = line.split("\t")

    #print '%s\t%s' % (user_id,loc_or_product_id)

    if not last_user_id or last_user_id != user_id:
        last_user_id = user_id
	cur_location = "-"
        if loc_or_product_id.startswith('L_'):
          cur_location = loc_or_product_id
    elif user_id == last_user_id:
        location = cur_location
        if loc_or_product_id.startswith('P_'):
          product_id = loc_or_product_id
          print '%s\t%s\t%s' % (last_user_id,product_id,location)
