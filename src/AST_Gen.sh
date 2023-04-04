#!/bin/sh
inputFile="../tests/test_0.java"
outputFile="test1.dot"
verbose="0"
h="0"
while getopts i:o:v:h: flag
do
    case "${flag}" in
        i) inputFile=${OPTARG};;
        o) outputFile=${OPTARG};;
        v) verbose=${OPTARG};;
        h) h=${OPTARG};;
    esac
done
if [ $h == "1" ];
then :
    echo "Refer to the following pdf: "
    sleep 1
    xdg-open "../doc/README.pdf"
    exit
fi
if [ $verbose == "1" ];
then :
    set -v
fi
./parse $inputFile $outputFile
dot -Tps $outputFile -o "Image.ps"
