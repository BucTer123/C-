# Название итогового файла
TARGET = myapp

# Все исходники
SRCS = main_gui.cpp commands/requestsz.cpp commands/cmd/terminalz.cpp

# Флаги компилятора и линковки FLTK + curl
CXXFLAGS = `fltk-config --cxxflags`
LDFLAGS = `fltk-config --ldflags` -lcurl

# Компилятор
CXX = g++

# Сборка
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(SRCS) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)

# Очистка
clean:
	rm -f $(TARGET) *.o commands/*.o commands/cmd/*.o
