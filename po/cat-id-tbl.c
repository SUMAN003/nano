/* Automatically generated by po2tbl.sed from nano.pot.  */

#if HAVE_CONFIG_H
# include <config.h>
#endif

#include "libgettext.h"

const struct _msg_ent _msg_tbl[] = {
  {"", 1},
  {"add_to_cutbuffer called with inptr->data = %s\n", 2},
  {"Blew away cutbuffer =)\n", 3},
  {"read_line: not on first line and prev is NULL", 4},
  {"Read %d lines", 5},
  {"\"%s\" not found", 6},
  {"New File", 7},
  {"File \"%s\" is a directory", 8},
  {"Reading File", 9},
  {"File to insert [from ./] ", 10},
  {"Cancelled", 11},
  {"Could not open file for writing: %s", 12},
  {"Could not open file: Path length exceeded.", 13},
  {"Wrote >%s\n", 14},
  {"Could not close %s: %s", 15},
  {"Could not open %s for writing: %s", 16},
  {"Could not set permissions %o on %s: %s", 17},
  {"Wrote %d lines", 18},
  {"File Name to write", 19},
  {"filename is %s", 20},
  {"File exists, OVERWRITE ?", 21},
  {"Constant cursor position", 22},
  {"Auto indent", 23},
  {"Suspend", 24},
  {"Help mode", 25},
  {"Pico messages", 26},
  {"Mouse support", 27},
  {"Cut to end", 28},
  {"Regular expressions", 29},
  {"Auto wrap", 30},
  {"Invoke the help menu", 31},
  {"Write the current file to disk", 32},
  {"Exit from nano", 33},
  {"Goto a specific line number", 34},
  {"Justify the current paragraph", 35},
  {"Replace text within the editor", 36},
  {"Insert another file into the current one", 37},
  {"Search for text within the editor", 38},
  {"Move to the previous screen", 39},
  {"Move to the next screen", 40},
  {"Cut the current line and store it in the cutbuffer", 41},
  {"Uncut from the cutbuffer into the current line", 42},
  {"Show the posititon of the cursor", 43},
  {"Invoke the spell checker (if available)", 44},
  {"Move up one line", 45},
  {"Move down one line", 46},
  {"Move forward one character", 47},
  {"Move back one character", 48},
  {"Move to the beginning of the current line", 49},
  {"Move to the end of the current line", 50},
  {"Go to the first line of the file", 51},
  {"Go to the last line of the file", 52},
  {"Refresh (redraw) the current screen", 53},
  {"Mark text at the current cursor location", 54},
  {"Delete the character under the cursor", 55},
  {"Delete the character to the left of the cursor", 56},
  {"Insert a tab character", 57},
  {"Insert a carriage return at the cursor position", 58},
  {"Make the current search or replace case (in)sensitive", 59},
  {"Cancel the current function", 60},
  {"Use the null string, \"\"", 61},
  {"Get Help", 62},
  {"WriteOut", 63},
  {"Exit", 64},
  {"Goto Line", 65},
  {"Justify", 66},
  {"Replace", 67},
  {"Read File", 68},
  {"Where Is", 69},
  {"Prev Page", 70},
  {"Next Page", 71},
  {"Cut Text", 72},
  {"UnCut Txt", 73},
  {"Cur Pos", 74},
  {"To Spell", 75},
  {"Up", 76},
  {"Down", 77},
  {"Forward", 78},
  {"Back", 79},
  {"Home", 80},
  {"End", 81},
  {"Refresh", 82},
  {"Mark Text", 83},
  {"Delete", 84},
  {"Backspace", 85},
  {"Tab", 86},
  {"Enter", 87},
  {"First Line", 88},
  {"Last Line", 89},
  {"Case Sens", 90},
  {"Cancel", 91},
  {"No Replace", 92},
  {"Null Str", 93},
  {"\
\n\
Buffer written to 'nano.save'\n", 94},
  {"Key illegal in VIEW mode", 95},
  {"\
 nano help text\n\
\n\
 The nano editor is designed to emulate the functionality and ease-of-use of \
the UW Pico text editor.  There are four main sections of the editor: The \
top line shows the program version, the current filename being edited, and \
whether or not the file has been modified.  Next is the main editor window \
showing the file being edited.  The status line is the third line from the \
bottom and shows important messages. The bottom two lines show the most \
commonly used shortcuts in the editor.\n\
\n\
 The notation for shortcuts is as follows: Control-key sequences are notated \
with a caret (^) symbol and are entered with the Control (Ctrl) key.  \
Escape-key sequences are notated with the Meta (M) symbol and can be entered \
using either the Esc, Alt or Meta key depending on your keyboard setup.  The \
following keystrokes are available in the main editor window. Optional keys \
are shown in parentheses:\n\
\n", 96},
  {"free_node(): free'd a node, YAY!\n", 97},
  {"free_node(): free'd last node.\n", 98},
  {"\
Usage: nano [GNU long option] [option] +LINE <file>\n\
\n", 99},
  {"Option\t\tLong option\t\tMeaning\n", 100},
  {" -T \t\t--tabsize=[num]\t\tSet width of a tab to num\n", 101},
  {" -R\t\t--regexp\t\tUse regular expressions for search\n", 102},
  {" -V \t\t--version\t\tPrint version information and exit\n", 103},
  {" -c \t\t--const\t\t\tConstantly show cursor position\n", 104},
  {" -h \t\t--help\t\t\tShow this message\n", 105},
  {" -k \t\t--cut\t\t\tLet ^K cut from cursor to end of line\n", 106},
  {" -i \t\t--autoindent\t\tAutomatically indent new lines\n", 107},
  {" -l \t\t--nofollow\t\tDon't follow symbolic links, overwrite\n", 108},
  {" -m \t\t--mouse\t\t\tEnable mouse\n", 109},
  {"\
 -r [#cols] \t--fill=[#cols]\t\tSet fill cols to (wrap lines at) #cols\n", 110},
  {" -p\t \t--pico\t\t\tMake bottom 2 lines more Pico-like\n", 111},
  {" -s [prog] \t--speller=[prog]\tEnable alternate speller\n", 112},
  {" -t \t\t--tempfile\t\tAuto save on exit, don't prompt\n", 113},
  {" -v \t\t--view\t\t\tView (read only) mode\n", 114},
  {" -w \t\t--nowrap\t\tDon't wrap long lines\n", 115},
  {" -x \t\t--nohelp\t\tDon't show help window\n", 116},
  {" -z \t\t--suspend\t\tEnable suspend\n", 117},
  {" +LINE\t\t\t\t\tStart at line number LINE\n", 118},
  {"\
Usage: nano [option] +LINE <file>\n\
\n", 119},
  {"Option\t\tMeaning\n", 120},
  {" -T [num]\tSet width of a tab to num\n", 121},
  {" -R\t\tUse regular expressions for search\n", 122},
  {" -V \t\tPrint version information and exit\n", 123},
  {" -c \t\tConstantly show cursor position\n", 124},
  {" -h \t\tShow this message\n", 125},
  {" -k \t\tLet ^K cut from cursor to end of line\n", 126},
  {" -i \t\tAutomatically indent new lines\n", 127},
  {" -l \t\tDon't follow symbolic links, overwrite\n", 128},
  {" -m \t\tEnable mouse\n", 129},
  {" -r [#cols] \tSet fill cols to (wrap lines at) #cols\n", 130},
  {" -s [prog]  \tEnable alternate speller\n", 131},
  {" -p \t\tMake bottom 2 lines more Pico-like\n", 132},
  {" -t \t\tAuto save on exit, don't prompt\n", 133},
  {" -v \t\tView (read only) mode\n", 134},
  {" -w \t\tDon't wrap long lines\n", 135},
  {" -x \t\tDon't show help window\n", 136},
  {" -z \t\tEnable suspend\n", 137},
  {" +LINE\t\tStart at line number LINE\n", 138},
  {" nano version %s by Chris Allegretta (compiled %s, %s)\n", 139},
  {" Email: nano@nano-editor.org\tWeb: http://www.nano-editor.org\n", 140},
  {"Mark Set", 141},
  {"Mark UNset", 142},
  {"check_wrap called with inptr->data=\"%s\"\n", 143},
  {"current->data now = \"%s\"\n", 144},
  {"After, data = \"%s\"\n", 145},
  {"Error deleting tempfile, ack!", 146},
  {"Could not create a temporary filename: %s", 147},
  {"Could not invoke spell program \"%s\"", 148},
  {"Could not invoke \"ispell\"", 149},
  {"Finished checking spelling", 150},
  {"Save modified buffer (ANSWERING \"No\" WILL DESTROY CHANGES) ? ", 151},
  {"Cannot resize top win", 152},
  {"Cannot move top win", 153},
  {"Cannot resize edit win", 154},
  {"Cannot move edit win", 155},
  {"Cannot resize bottom win", 156},
  {"Cannot move bottom win", 157},
  {"%s enable/disable", 158},
  {"enabled", 159},
  {"disabled", 160},
  {"Main: set up windows\n", 161},
  {"Main: bottom win\n", 162},
  {"Main: open file\n", 163},
  {"I got Alt-O-%c! (%d)\n", 164},
  {"I got Alt-[-1-%c! (%d)\n", 165},
  {"I got Alt-[-2-%c! (%d)\n", 166},
  {"I got Alt-[-%c! (%d)\n", 167},
  {"I got Alt-%c! (%d)\n", 168},
  {"Case Sensitive Regexp Search%s%s", 169},
  {"Regexp Search%s%s", 170},
  {"Case Sensitive Search%s%s", 171},
  {"Search%s%s", 172},
  {" (to replace)", 173},
  {"Search Cancelled", 174},
  {"Search Wrapped", 175},
  {"Replaced %d occurences", 176},
  {"Replaced 1 occurence", 177},
  {"Replace Cancelled", 178},
  {"Replace with", 179},
  {"Replace this instance?", 180},
  {"Enter line number", 181},
  {"Aborted", 182},
  {"Come on, be reasonable", 183},
  {"Only %d lines available, skipping to last line", 184},
  {"actual_x_from_start for xplus=%d returned %d\n", 185},
  {"input '%c' (%d)\n", 186},
  {"New Buffer", 187},
  {"  File: ...", 188},
  {"Modified", 189},
  {"Moved to (%d, %d) in edit buffer\n", 190},
  {"current->data = \"%s\"\n", 191},
  {"I got \"%s\"\n", 192},
  {"Yes", 193},
  {"All", 194},
  {"No", 195},
  {"do_cursorpos: linepct = %f, bytepct = %f\n", 196},
  {"line %d of %d (%.0f%%), character %d of %d (%.0f%%)", 197},
  {"Dumping file buffer to stderr...\n", 198},
  {"Dumping cutbuffer to stderr...\n", 199},
  {"Dumping a buffer to stderr...\n", 200},
};

int _msg_tbl_length = 200;
