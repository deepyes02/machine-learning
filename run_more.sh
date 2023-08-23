#!/bin/sh
while getopts u:a:f: flag
do
	case "${flag}" in
		u) username=${OPTARG};;
		a) age=${OPTARG};;
		f) fullname=${OPTARG};;
		*) random=${OPTARG};;
	esac
done

echo "Username : $username"
echo "Age : $age"
echo "FullName : $fullname"
$random;


