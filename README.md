XEdit Text Editor for Color Maximite 2 by Epsilon
-------------------------------------------------
Current Version: 0.4

ChangeLog
---------
0.4:
- Added visual position-in-buffer indicator on right window border.
- Improved search speed.
- Fixed out of memory error when opening help screen in certain configurations, 
  reported by thwill.
- Fixed weird 'animation' on last line when (un)indenting a selection that spans more than
  1 screen. Also made it much faster.
- Dynamically sized keyword array (KEYWORD_LIST_DATA) using end sentinel as suggested by Jiri.
- Fixed bug: Search always started from the beginning of the line instead of from cursor.
- Added serial compatibility mode, enabled through flag SERIAL_INPUT_COMPAT_MODE. Note that
  enabling this mode affects certain keybindings. In particular, selection mode is toggled 
  using the Esc key.
- Moved find-next keybinding to Ctrl-N. Added find-previous function bound to Alt-N.
- Added reverse-find keybinding, Alt-F.
- F6 shows console screen as it was when launching xedit in current buffer. This allows you to
  see your previous program output, trace list etc. from xedit.
- F11 exits XEdit and runs program currently in buffer.

0.3:
- Limited MMBasic Syntax Highlighting support.
- Improved vertical scrolling, line insertion and line deletion speed.
- Switched to a dark solarized color scheme. If you prefer the higher contrast blue&white theme,
  you can still select that in the user config variables section. Or you can just roll your own
  of course.
- Critical bug fix: potential program abort triggered by toggling window split. This bug was 
  introduced in 0.2.
- Critical bug fix: wrap-around search without hit can leave editor in inconsistent state,
  resulting in unpredictable behavior.
- Fixed bug in replace function turning parts of replaced lines into upper case. This bug was
  introduced in 0.2.
- Macro recording fix: new macro should overwrite existing macro, not append to it. This bug was
  introduced in 0.2.
- Added DISABLE_CONFIRMATION prompt option. Default: 0.
- Fixed a bug where last lines of a buffer would show up duplicate after deleting a selection.
- Made sure that search matches are always shown fully on screen.
- Increased undo depth from 16 to 32 entries.
- Split view into a single buffer will now as much as possible maintain view in one window
  (instead of scrolling) when lines are added or removed in other window.
- Now allowing replace-with-nothing.

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
XEdit supports undo, macro recording, MMBasic syntax highlighting as well as the usual 
complement of editor operations: cut/copy/paste, find/replace, indent/unident selections, 
insert/overwrite mode, goto line.

To Do's
-------
- Add support for vegipete's FileDialog.
- Add Select-All key binding.
- Maintain backup files when saving.
- Add scroll current line to center/top/end key bindings.
- Add resource utilization pop-up.
- Add kill-to-end-of-line (Ctrl-K) keybinding.
- Add case senstive search/replace keybindings.
- Faster horizontal scrolling speed.
- Support copy-to-clipboard from console screen.
- More sensible buffer position when toggling window split (F5).
- Faster scrolling with selection.

Key Bindings
------------
F1         = Help
F2/F9      = Save File/Save File as
F3         = Load File
F4         = Toggle Buffer
F5         = Toggle Window split
F6         = Show Console Screen in current buffer
F10        = Exit XEdit
F11        = Exit XEdit and run program currently in buffer
Ctrl-O     = Toggle Active Window
Ctrl-F     = Find Prompt/Selection
Alt-F      = Reverse-Find Prompt/Selection.
Ctrl-N     = Find Next
Ctrl-R     = Replace Prompt/Selection
Ctrl-X/Y/P = Cut/Copy/Paste
Ctrl-G     = Goto Line
INS        = Toggle Insert/Overwrite mode (Ctrl-W in SERIAL_INPUT_COMPAT_MODE)
Home 1x/2x/3x = Go To Start of Line/Page/Buffer
End 1x/2x/3x = Go To End of Line/Page/Buffer
Tab/Shift-Tab = Indent/Unindent Line/Selection (Tab/Ctrl-B in SERIAL_INPUT_COMPAT_MODE)
Shift-Navigation Key = Start/Extend Selection 
                       (Esc toggles selection mode in SERIAL_INPUT_COMPAT_MODE)
Ctrl-Z     = Undo
F7         = Start Macro Recording
F8         = Stop Macro Recording / Playback recorded macro
Alt-C      = Toggle Syntax Highlighting On/Off (Ctrl-S in SERIAL_INPUT_COMPAT_MODE)
Alt-K      = Show Key Code at prompt (not supported in SERIAL_INPUT_COMPAT_MODE)
Alt-S      = Screenshot (not supported in SERIAL_INPUT_COMPAT_MODE)

Limitations
-----------
- Max. 14000 lines across all buffers (including clipboard and undo buffer).
- Max. 2 windows
- Max. 2 buffers
- Text entered on find prompt can't include double quotes or commas. Find selection can
includes double quotes and commas however.
- Edit and Clipboard operations are not supported on buffer in show console mode.
- No undo for replace operations.
- Tested on FW version 5.0505 only.
