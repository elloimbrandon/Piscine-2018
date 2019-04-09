#!/bin/sh

ldapsearch -Q "(uid=brfeltz)" | grep "dn" | sed s'/dn: //'
