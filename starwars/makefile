
TARGET	= example.exe


RM		= del

FILES 	= main.cpp data.cpp utility.cpp starwars.cpp
#FILES go here^

OBJS 	= $(FILES:.cpp=.o)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	g++ $^ -o $@

%.o:	%.cpp %.h
	g++ -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)