'Key Bindings - Default
'
'Copy this file to "keybindings.user.inc" to get a
'user keybindings file that will not be 
'overwritten by future updates.
'If a "keybindings.user.inc file exists", it always
'takes precedence over "keybindings.default.inc".
'------------------------------------------------

IF SERIAL_INPUT_COMPAT_MODE% = 0 THEN
  'Key code mode:
  '--> Key Codes. Press Alt-K in the editor to see the keycode corresponding to a keypress. Combos with Ctrl, Shift and Alt are supported.
  'No distinction is made between Left and Right Shift/Alt/Ctrl.
  CONST KEY_BCKSPC% = 8
  CONST KEY_TAB% = 9
  CONST KEY_LF% = 10
  CONST KEY_DEL% = 127
  CONST KEY_UP_ARROW% = 128
  CONST KEY_DOWN_ARROW% = 129
  CONST KEY_LEFT_ARROW% = 130
  CONST KEY_RIGHT_ARROW% = 131
  CONST KEY_INS% = 132
  CONST KEY_HOME% = 134
  CONST KEY_END% = 135
  CONST KEY_PGUP% = 136
  CONST KEY_PGDOWN% = 137
  
  CONST KEY_F1% = 145
  CONST KEY_F2% = 146
  CONST KEY_F3% = 147
  CONST KEY_F4% = 148
  CONST KEY_F5% = 149
  CONST KEY_F6% = 150
  CONST KEY_F7% = 151
  CONST KEY_F8% = 152
  CONST KEY_F9% = 153
  CONST KEY_F10% = 154
  CONST KEY_F11% = 155
  CONST KEY_F12% = 156

  CONST KEY_CTRL_A% = 257
  CONST KEY_CTRL_F% = 262
  CONST KEY_CTRL_G% = 263
  CONST KEY_CTRL_K% = 267
  CONST KEY_CTRL_Z% = 282
  CONST KEY_CTRL_SPC% = 288
  CONST KEY_CTRL_M% = 365
  CONST KEY_CTRL_N% = 270
  CONST KEY_CTRL_O% = 271
  CONST KEY_CTRL_P% = 272
  CONST KEY_CTRL_R% = 274
  CONST KEY_CTRL_S% = 275
  CONST KEY_CTRL_V% = 278
  CONST KEY_CTRL_X% = 280
  CONST KEY_CTRL_Y% = 281
  
  CONST KEY_SHFT_CRSR_U% = 1152
  CONST KEY_SHFT_HOME% = 1158
  CONST KEY_SHFT_END% = 1159
  CONST KEY_SHFT_PGUP% = 1160
  CONST KEY_SHFT_PGDOWN% = 1161
  CONST KEY_SHFT_CRSR_D% = 1185
  CONST KEY_SHFT_CRSR_L% = 1154
  CONST KEY_SHFT_CRSR_R% = 1187
  
  CONST KEY_ALT_C% = 611
  CONST KEY_ALT_F% = 614
  CONST KEY_ALT_H% = 616
  CONST KEY_ALT_K% = 619
  CONST KEY_ALT_L% = 620
  CONST KEY_ALT_M% = 621
  CONST KEY_ALT_N% = 622 
  CONST KEY_ALT_R% = 626
  CONST KEY_ALT_S% = 627
  IF MM.INFO(VERSION) >= 5.06 THEN
    CONST KEY_SHFT_TAB% = 1183
  ELSE
    CONST KEY_SHFT_TAB% = 1033
  ENDIF
ELSE
  'SERIAL/INKEY mode:
  CONST KEY_INS = -1
  CONST KEY_SHFT_CRSR_U% = -1
  CONST KEY_SHFT_HOME% = -1
  CONST KEY_SHFT_END% = -1
  CONST KEY_SHFT_PGUP% = -1
  CONST KEY_SHFT_PGDOWN% = -1
  CONST KEY_SHFT_CRSR_D% = -1
  CONST KEY_SHFT_CRSR_L% = -1
  CONST KEY_SHFT_CRSR_R% = -1
  CONST KEY_ALT_C% = -1
  CONST KEY_ALT_F% = -1
  CONST KEY_ALT_H% = -1
  CONST KEY_ALT_K% = -1
  CONST KEY_ALT_L% = -1
  CONST KEY_ALT_M% = -1
  CONST KEY_ALT_N% = -1
  CONST KEY_ALT_R% = -1
  CONST KEY_ALT_S% = -1
  IF MM.INFO(VERSION) >= 5.06 THEN
    CONST KEY_SHFT_TAB% = 159
  ELSE
    CONST KEY_SHFT_TAB% = -1
  ENDIF
  
  CONST KEY_ESC% = 27  

  CONST KEY_BCKSPC% = 8
  CONST KEY_TAB% = 9
  CONST KEY_LF% = 10
  CONST KEY_DEL% = 127
  CONST KEY_UP_ARROW% = 128
  CONST KEY_DOWN_ARROW% = 129
  CONST KEY_LEFT_ARROW% = 130
  CONST KEY_RIGHT_ARROW% = 131
  CONST KEY_HOME% = 134
  CONST KEY_END% = 135
  CONST KEY_PGUP% = 136
  CONST KEY_PGDOWN% = 137
  
  CONST KEY_F1% = 145
  CONST KEY_F2% = 146
  CONST KEY_F3% = 147
  CONST KEY_F4% = 148
  CONST KEY_F5% = 149
  CONST KEY_F6% = 150
  CONST KEY_F7% = 151
  CONST KEY_F8% = 152
  CONST KEY_F9% = 153
  CONST KEY_F10% = 154
  CONST KEY_F11% = 155
  CONST KEY_F12% = 156

  CONST KEY_CTRL_A% = 1  
  CONST KEY_CTRL_B% = 2  
  CONST KEY_CTRL_F% = 6
  CONST KEY_CTRL_G% = 7
  CONST KEY_CTRL_K% = 11
  CONST KEY_CTRL_Z% = 26
  CONST KEY_CTRL_M% = -1
  CONST KEY_CTRL_N% = 14
  CONST KEY_CTRL_O% = 15
  CONST KEY_CTRL_P% = 16
  CONST KEY_CTRL_R% = 18
  CONST KEY_CTRL_S% = 19
  CONST KEY_CTRL_V% = 22
  CONST KEY_CTRL_W% = 23
  CONST KEY_CTRL_X% = 24
  CONST KEY_CTRL_Y% = 25
ENDIF
'<-- Key Codes

'--> Key Bindings:
IF SERIAL_INPUT_COMPAT_MODE% THEN
  CONST TOGGLE_SELECTION_KEY% = KEY_ESC%
ENDIF
CONST EXIT_KEY% = KEY_F10%
CONST TOGGLE_SCREEN_SPLIT_KEY% = KEY_F5%
CONST SHOW_CONSOLE_KEY% = KEY_F6%
CONST RUN_PROG_KEY% = KEY_F11%
CONST TOGGLE_ACTIVE_WINDOW_KEY% = KEY_CTRL_O%
IF SERIAL_INPUT_COMPAT_MODE% = 0 THEN
  CONST TOGGLE_INS_OVR_MODE_KEY% = KEY_INS%
ELSE
  CONST TOGGLE_INS_OVR_MODE_KEY% = KEY_CTRL_W%
ENDIF
CONST TOGGLE_BUFFER_KEY% = KEY_F4%
CONST LOAD_INTO_CURRENT_BUF_KEY% = KEY_F3%
CONST CLOSE_BUFFER_KEY% = KEY_F12%
CONST CRSR_UP_KEY% = KEY_UP_ARROW%
CONST CRSR_DOWN_KEY% = KEY_DOWN_ARROW%
CONST CRSR_LEFT_KEY% = KEY_LEFT_ARROW%
CONST CRSR_RIGHT_KEY% = KEY_RIGHT_ARROW%
CONST HOME_KEY% = KEY_HOME%
CONST END_KEY% = KEY_END%
CONST PGUP_KEY% = KEY_PGUP%
CONST PGDOWN_KEY% = KEY_PGDOWN%
CONST SELECT_CRSR_U_KEY% = KEY_SHFT_CRSR_U%
CONST SELECT_HOME_KEY% = KEY_SHFT_HOME%
CONST SELECT_END_KEY% = KEY_SHFT_END%
CONST SELECT_PGUP_KEY% = KEY_SHFT_PGUP%
CONST SELECT_PGDOWN_KEY% = KEY_SHFT_PGDOWN%
CONST SELECT_CRSR_D_KEY% = KEY_SHFT_CRSR_D%
CONST SELECT_CRSR_L_KEY% = KEY_SHFT_CRSR_L%
CONST SELECT_CRSR_R_KEY% = KEY_SHFT_CRSR_R%
CONST ENTER_KEY% = KEY_LF%
CONST INDENT_KEY% = KEY_TAB%
CONST UNINDENT_KEY% = KEY_SHFT_TAB%
CONST DELETE_KEY% = KEY_DEL%
CONST BACKSPACE_KEY% = KEY_BCKSPC%
CONST TOGGLE_SHOW_KEYCODE_AT_PROMPT% = KEY_ALT_K%
CONST GOTO_KEY% = KEY_CTRL_G%
CONST CUT_KEY% = KEY_CTRL_X%
CONST COPY_KEY% = KEY_CTRL_Y%
CONST PASTE_KEY% = KEY_CTRL_V%
CONST FIND_KEY% = KEY_CTRL_F%
CONST FIND_REV_KEY% = KEY_ALT_F%
CONST FIND_NEXT_KEY% = KEY_CTRL_N%
CONST FIND_PREV_KEY% = KEY_ALT_N%
CONST FIND_ACROSS_FILES_KEY% = KEY_CTRL_S%
CONST REPLACE_KEY% = KEY_CTRL_R%
CONST UNDO_KEY% = KEY_CTRL_Z%
CONST SAVE_KEY% = KEY_F2%
CONST SAVE_AS_KEY% = KEY_F9%
CONST HELP_KEY% = KEY_F1%
CONST SCREENSHOT_KEY% = KEY_ALT_S%
CONST START_MACRO_REC_KEY% = KEY_F7%
CONST PLAY_MACRO_KEY% = KEY_F8%
IF SERIAL_INPUT_COMPAT_MODE% = 0 THEN
  CONST TOGGLE_SYN_HL% = KEY_ALT_C%
ENDIF
CONST KILL_TO_EOL_KEY% = KEY_CTRL_K%
CONST RESOURCE_UTIL_KEY% = KEY_ALT_R%
CONST SELECT_ALL_KEY% = KEY_CTRL_A%
CONST MOVE_TO_CENTER_KEY% = KEY_CTRL_M%
CONST MOVE_TO_TOP_KEY% = KEY_ALT_M%
'<-- Key Bindings
