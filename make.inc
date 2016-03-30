
INCLUDES = -I. -I/usr/local/include

MAKE = /usr/bin/make

CC = g++

CFLAGS = -O3 -Wall

OBJ := $(patsubst %.cpp, %.o, $(wildcard *.cpp))

OBJ_DIRECTORY = ../objs

LIB_DIRECTORY = ../lib

OBJS = $(addprefix $(OBJ_DIRECTORY)/, $(OBJ))
