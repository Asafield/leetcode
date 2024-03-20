#!/bin/bash
read -p "change main.cpp to: " filename
mv main.cpp "$filename.cpp"
