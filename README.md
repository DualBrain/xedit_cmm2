XEdit Text Editor for Color Maximite 2 by Epsilon
-------------------------------------------------
Current Version: 0.2

ChangeLog
---------
0.2:
- Cleaned up and fixed typo in help screen.
- Fixed AltGr keycombos (such as @) on Azerty keyboards
- Fixed buffer position not being remembered after full screen toggle buffer followed by toggle
  window split.
- Fixed incorrect indentation of newline when cursor was in the leading spaces section.
- Fixed undo enter not working correctly.
- Fixed crash(!) that could happen when going from single window to split screen mode and 
  then toggling active window.
- Fixed match on last window row not being shown after search wraparound.
- Grouped user config settings at beginning of xedit.bas.
- Added user config. setting: SEARCH_IS_CASE_SENSITIVE%. Default=0. 
- Added configurable option to restore previous context when starting editor. Default enabled.
- Added Alt-F find next function.
- Included string to find/replace in search prompt.
- Added macro recording capability, bound to F7/F8 (start/stop&playback).
- Added Close File action (F12).

0.1:
- Initial version.

Description
-----------
XEdit is a text editor written in MMBasic. The editor supports up to two windows (Hsplit/Vsplit
or no split) and up to two buffers (files). The two buffers can be freely assigned to 
windows and two windows can present separate views into a single buffer.
XEdit supports undo as well as the usual complement of operations: cut/copy/paste, find/replace,
indent/unident selections, insert/overwrite mode, goto line.

To Do's
-------
- Add support for vegipete's FileDialog
- Add option to display row numbers next to the rows
- Add Select-All key binding
- Maintain backup files when saving
- Syntax Highlighting
- Add scroll current line to center/top/end key bindings
- Add resource utilization pop-up
- Add kill-to-end-of-line (Ctrl-K) keybinding

Limitations
-----------
- Max. 14000 lines across all buffers (including clipboard and undo buffer).
- Max. 2 windows
- Max. 2 buffers
- Console Only

KeyBindings
-----------
F1         = Help
F2/F9      = Save File/Save File as
F3         = Load File
F4         = Toggle Buffer
F5         = Toggle Window split
F10        = Quit
Ctrl-O     = Toggle Active Window
Ctrl-F     = Find Prompt/Selection
Alt-F      = Find Next
Ctrl-R     = Replace Prompt/Selection
Ctrl-X/Y/P = Cut/Copy/Paste
Ctrl-G     = Goto Line
INS        = Toggle Insert/Overwrite mode
Home 1x/2x/3x = Go To Start of Line/Page/Buffer
End 1x/2x/3x = Go To End of Line/Page/Buffer
Tab/Shift-Tab = Indent/Unindent Line/Selection
Shift-Navigation Key = Start/Extend Selection
Ctrl-Z     = Undo
Alt-K      = Show Key Code at prompt
Alt-S      = Screenshot


                    