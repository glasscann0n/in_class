# Makefile for Lecture 5 example program
# modify if running on PC (change comments where needed)
#
#TARGET	= main
TARGET	= main.exe

#RM		= rm -f
RM		= del

FILES 	= main.cpp message.cpp

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)