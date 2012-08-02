"=============================================================================
"     FileName: trc.vim
"         Desc: 
"       Author: loseblue
"        Email: loseblue@163.com
"     HomePage: http://www.google.com
"      Version: 0.0.1
"   LastChange: 2012-04-01 11:52:29
"      History:
"=============================================================================

"set case insensitive.
syn case ignore

"This script is encoded as utf8, and will convert to appropriate value when running.
scriptencoding utf-8

syn keyword trcUrl trcError
syn keyword trcWord MsgTag IEITag IEILen CompTag CompLen

"========================================================
" Highlight All Function
"========================================================
syn match   cFunction "\<[a-zA-Z_][a-zA-Z_0-9]*\>[^()]*)("me=e-2
syn match   cFunction "\<[a-zA-Z_][a-zA-Z_0-9]*\>\s*("me=e-1
hi cFunction        guifg=#009933   guibg=NONE      gui=bold

"========================================================
" Highlight trc error
"========================================================
syn match trcMessage display "\s[<-]-[>-]\s<[0-9A-Za-z_ ]*>"
syn match trcLayer display "^[a-zA-Z_]*\s\+:"
syn match trcError display "\s[Ee]rror\s"
syn match trcError display "LOST MSG !!!"
syn match trcError display "FAILED"
syn match trcError display "bad auxiliary"
syn match trcFsm display "[c-s][c-s]_Fsm"
syn match trcStatus display "Status Enquiry, state [0-9 ][0-9 ], cause [0-9 ][0-9 ]"
syn match trcStatus display "Auxiliary state\s\d[0-9 ]*"
syn match trcStatus display "Status with bad cause:\s[0-9 ]*"
"syn match trcTest display "^[a-zA-Z_]*\s\s:\s\s\d\s[<-]-[>-]\s<[0-9A-Za-z_]*>$"

hi trcMessage     guifg=#0000AA guibg=NONE    gui=bold
hi trcLayer       guifg=#AAAAAA guibg=#ff0000 guibg=NONE    gui=bold
hi trcError       guifg=#000000 guibg=#ff0000 term=reverse cterm=bold
hi trcFsm         guifg=#CC00CC guibg=NONE    gui=bold
hi trcStatus      guifg=#ff0000 guibg=NONE    gui=bold
hi trcWord      guifg=#ff0000 guibg=NONE    gui=bold
"hi trcTest       guifg=#FFFFFF guibg=#ff0000 term=reverse cterm=bold

