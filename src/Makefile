
include ../make.inc

LINKS = \
-I$(OBJ_DIRECTORY) \
-I$(LIB_DIRECTORY)

EXECUTABLE = ./build.exe

class_Node.o: \
class_Node.h \
class_Node.cpp
	$(CC) $(CFLAGS) -c class_Node.cpp $(LINKS) \
	 -o $(OBJ_DIRECTORY)/$@ -J$(LIB_DIRECTORY)

class_Stack.o: \
class_Node.h\
class_Stack.h\
class_Stack.cpp
	$(CC) $(CFLAGS) -c class_Stack.cpp $(LINKS) \
	 -o $(OBJ_DIRECTORY)/$@ -J$(LIB_DIRECTORY)

main.o: \
class_Node.o \
class_Stack.o \
main.cpp
	$(CC) $(CFLAGS) -c main.cpp $(LINKS) \
	-o $(OBJ_DIRECTORY)/$@

exec: $(OBJ)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS) $(LINKS)

run:
	$(MAKE) clean
	$(MAKE) exec; $(EXECUTABLE)

clean:
	rm -f $(OBJS) $(EXECUTABLE) $(LIB_DIRECTORY)/*.mod