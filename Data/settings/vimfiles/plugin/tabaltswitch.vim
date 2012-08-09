"--------------------------------------------
" 关于标签页的标题修改 "
 " 使用了自定义函数  GuiTabLabel()
 set showtabline=2 " always show tabs in gvim, but not vim
 set guitablabel=%{GuiTabLabel()}"
 
 "
 " 修改标签页的标题
 " set up tab labels with tab number, buffer name, number of windows
 "
 function! GuiTabLabel()"
   let label = ''
   let bufnrlist = tabpagebuflist(v:lnum)
   " Add '+' if one of the buffers in the tab page is modified
   for bufnr in bufnrlist
     if getbufvar(bufnr, "&modified")
       let label = '+'
       break
     endif
   endfor
   " Append the tab number
   let label .= v:lnum.': '
   " Append the buffer name
   let name = bufname(bufnrlist[tabpagewinnr(v:lnum) - 1])
   if name == ''
     " give a name to no-name documents
     if &buftype=='quickfix'
       let name = '[Quickfix List]'
     else
       let name = '[No Name]'
     endif
   else
     " get only the file name
     let name = fnamemodify(name,":t")
   endif
   let label .= name
   " Append the number of windows in the tab page
   let wincount = tabpagewinnr(v:lnum, '$')
   return label . '  [' . wincount . ']'
 endfunction"
 
 " 让 gvim 支持 Alt+n 来切换标签页
 function! BufPos_Initialize()
     for a in range(1,9)
         exe 'map <A-' . a . '> ' . a . 'gt'
     endfor
 endfunction
 autocmd VimEnter * call BufPos_Initialize()
 "
 " alt+左右键来移动标签
 "
 nn <silent> <M-left> :if tabpagenr() == 1\|exe "tabm ".tabpagenr("$")\|el\|exe "tabm ".(tabpagenr()-2)\|en<CR>
 nn <silent> <M-right> :if tabpagenr() == tabpagenr("$")\|tabm 0\|el\|exe "tabm ".tabpagenr()\|en<CR>

