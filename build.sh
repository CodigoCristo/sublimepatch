#!/bin/bash

echo "Sublime Text / Merge build system ..."
PS3="Select right version: "

options=("Sublime 4143 or Merge 2079" "Old versions pre sublime 4143 or Merge 2079" "Quit")
select opt in "${options[@]}"
do
    case $REPLY in
        1)
            build_file="main.c"
            break ;;
        2)
            build_file="main_old.c"
            break ;;
        3)
            echo "Quitting..."
            exit 1 ;;
        *) echo "invalid option $REPLY" ;;
    esac
done

echo "Building executable for $build_file"
mkdir -p dist
gcc $build_file -o dist/run_linux.bin
echo "Build complete successfully"


