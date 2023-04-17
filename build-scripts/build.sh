#!/bin/bash

# script to compile and link the projects source files
# generate an output file named savvy.out

gcc ../savvy/savvy.c ../savvy/show_quiz.c ../quiz/c/quiz.c \
../quiz_ref/c/ref.c ../savvy/options/arg_1.c ../savvy/options/arg_2.c \
../savvy/summary.c -o ../savvy/savvy.out
