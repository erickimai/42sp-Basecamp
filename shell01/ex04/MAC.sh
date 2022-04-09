#!/bin/sh
ifconfig -a | grep Ethernet | awk {'print $2 "  " $3 " " $4 "  " $5'}
