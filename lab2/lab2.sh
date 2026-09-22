#!/bin/bash

count=0
for pass in $(sort passwords.txt)
do
	echo "$pass"

	echo "$pass" > "password${count}.txt"

	((count++))
done
