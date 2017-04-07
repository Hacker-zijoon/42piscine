#!/bin/sh
ldapsearch -Q -u "uid=*bon*" | grep -w ^cn | wc -l | sed "s/ //g"
