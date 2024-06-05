#!/usr/bin/python
import sys
for line in sys.stdin:
	user_id = ""
	product_id = "-"
	location = "-"
	line = line.strip()         
	splits = line.split("\t")         
	if len(splits) == 5:
		user_id = splits[2]
		product_id = splits[1]
	        #print '%s\t%s' % (user_id,"P_" + product_id)
	        results = [user_id, "P_" + product_id]
                print("\t".join(results))                
	else:
		user_id = splits[0]
		location = splits[3]  
                #print '%s\t%s' % (user_id, "L_" + location) 
	        results = [user_id, "L_" + location]
                print("\t".join(results))                
