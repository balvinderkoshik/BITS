#!/usr/bin/python

import sys

# -- Stadium Data
# Stadium
# Stadium Capacity    
# expanded capacity (standing)   
# Location    
# Playing surface 
# Is Artificial Turf  
# Team    
# Opened  
# Weather 
# Station Roof Type
# elevation


for line in sys.stdin:
    line = line.strip()
    unpacked = line.split("\t")
    stadium, capacity, expanded, location, surface, turf, team, opened, weather, roof, elevation = line.split("\t")
    results = [turf, "1"]
    print("\t".join(results))