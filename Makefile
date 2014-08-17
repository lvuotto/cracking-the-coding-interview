
CODEDIR = src
BINDIR = bin


.PHONY: all clean


code:
	make -C $(CODEDIR)

all: code

clean:
	rm -f $(BINDIR)/*

