#!/bin/bash

# Вариант 77
# Написать shell-процедуру, которая:
# в заданном первым параметром файле находит все слова-омонимы; 
# выводит на экран строки, содержащие омонимы; 
# подсчитывает в каждой строке число символов, совпадающих с заданным 
# вторым параметром символом, и выводит его на экран

FILE=$1
CHAR=$2

# finding homonyms if FILE
HOMONYMS=$(grep -wo '[[:alnum:]]\+' $FILE| sort | uniq -d )
echo "potential homonyms: "
echo "$HOMONYMS"

# print line containing homonyms
for WORD in $HOMONYMS
do
	echo
	echo "homonym = \"$WORD\""
	grep -n $WORD $FILE
done

echo
echo "Number of entries symbol \"$CHAR\" in $FILE"
sed "s/[^$CHAR]//g" $FILE| awk '{ print length }'
