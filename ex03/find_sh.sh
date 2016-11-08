find ./ -name '*.sh' -print | rev | cut -d '/' -f 1 | cut -d '.' -f2 | rev
