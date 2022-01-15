program_NAME	:=	bin/main

program_CXX_SRCS		:=		$(wildcard src/*.cpp)
program_CXX_OBJS		:=		${program_CXX_SRCS:.cpp=.o}
program_OBJS			:=		$(program_CXX_OBJS)
program_INCLUDE_DIRS	:=		include/
program_LIBRARY_DIRS	:=
program_LIBRARIES		:= 
WX_LIBS				    :=		$(shell wx-config --libs)
WX_CFLAGS				:= 		$(shell wx-config --cflags)

CXXFLAGS				+=		$(foreach includedir, $(program_INCLUDE_DIRS), -I$(includedir)) $(WX_CFLAGS)  -std=c++20 -Wall -Wextra -g 
LDFLAGS					+=		$(foreach libarydir, $(program_LIBRARY_DIRS), -L$(librarydir))
LDLLIBS					+=		$(foreach library, $(program_LIBRARIES), -l$(library)) $(WX_LIBS)

.PHONY: all clean distclean

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	$(LINK.cc) $(program_OBJS) -o $(program_NAME) $(LDLLIBS) 

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_CXX_OBJS)

distclean: clean

itlj: cpp_properties.json
cpp_properties.json: 
	$(LINK.cc) $(program_OBJS) -o $(program_NAME) $(LDLLIBS) $< --output $@
