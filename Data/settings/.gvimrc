"=============================================================================
"     FileName: _gvimrc
"         Desc: 
"       Author: loseblue
"        Email: loseblue[a]163.com
"      Version: 1.0.3
"   LastChange: 2013-08-28 14:16:55
"      History:
"=============================================================================
" Platform
" {{{
if has("win32") || has("win64") || has("win95") || has("win32unix")
    let g:OS = "win"
    let g:win = 1
    let g:mac = 0
    let g:unix = 0
elseif has("mac") || has("macunix")
    let g:OS = "mac"
    let g:mac = 1
    let g:win = 0
    let g:unix = 0
elseif has("unix")
    let g:OS = "unix"
    let g:unix = 1
    let g:win = 0
    let g:mac = 0
endif
if has("gui") || has("gui_running")
    let g:gui = 1
else
    let g:gui = 0
endif
if has("gui_macvim")
    let g:mvim = 1
else
    let g:mvim = 0
endif

" { Cancel macVim command
if g:mvim
    macm Edit.Font.Bigger key=<nop>
    macm Edit.Font.Smaller key=<nop>
endif
" }
