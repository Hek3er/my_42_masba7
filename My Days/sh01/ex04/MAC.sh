ifconfig | grep ether | awk '{print $2}'| sed '2d'
