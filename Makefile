BUILDDIR=$(CURDIR)/dist
OUTFILE=run_linux.bin

SOURCE=main.c
OLD_SOURCE=main_old.c

build: $(BUILDDIR) $(SOURCE)
	gcc $(SOURCE) -o $(BUILDDIR)/$(OUTFILE)

old: $(BUILDDIR) $(OLD_SOURCE) 
	gcc $(OLD_SOURCE) -o $(BUILDDIR)/$(OUTFILE)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -f $(BUILDDIR)/$(OUTFILE)