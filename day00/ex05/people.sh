ldapsearch -Q -u "uid=z*" cn | grep ^cn | sort -r -f | cut -c5-
