#!/bin/bash

# script to compile and link the projects source files
# generate an output file named savvy.out

gcc ../savvy/savvy.c ../savvy/show_quiz.c ../quiz/c/quiz.c ../quiz_ref/c/ref.c -o ../savvy/savvy.out
