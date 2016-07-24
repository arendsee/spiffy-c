# Spiffy C Template

This repository will contain a full template for a middle sized C program.

# Goals

 1. Develop a cohesive skeleton I can reuse in future projects
 2. Field infrastructure tech without cluttering other repos
 3. Personal edification

# Design choices

 * CMake for building the program
 * CTest for unit testing
 * Git for version control
 * Github for remote repositing
 * Github flavored markdown for README (displayed on github page)
 * Doxygen for documentation
 * Travis to link Doxygen HTML output to github pages ([as described here](http://wesleyhales.com/blog/2013/03/29/Fun-with-Static-Site-Generators-and-Travis/))
 * Travis for showing build status, version, and other candy on github page
 * Command line interface with ???

# Codebase

My example code will be a simple calculator program. It uses subcommands (`add`
and `multiply`) and has subcommand-level help. This general setup greatly
simplies usage of CLI programs. In spiffy-c, I work on finding an easy to
maintain interface, ideally something similar to argparse in Python.

```
$ spiffy add 1 2
$ spiffy multiply 2 * 4
$ spiffy -h
$ spiffy add -h
$ spiffy -v
```

I should extend my program so it can test portability and dependency
challenges. For example, by displaying the output numbers in a popup.

# Other languages

Eventually I would like to build a similar template repository for the other
languages I use. It would also be neat to make one for a general, multilinguagl

# TODO

 [x] Write basic README
 [x] Add LICENSE
 [x] Build the codebase
 [ ] Set of CLI interface
 [ ] Add simple CMake
 [ ] Add CTest
 [ ] Add Doxygen
 [ ] Add Travis build and version hooks
 [ ] Script Travis push of Doxygen content to github pages
