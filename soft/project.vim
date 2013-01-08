let g:MyProjectFileName = 'test project'
let g:MP_Cur_Prj='.\'
let g:MP_Ctags_Enable = 1
let g:MP_Cscope_Enable = 1
let g:MP_Ctags_Path = 'ctags'
let g:MP_Cscope_Path = 'cscope'
let g:MP_Ctags_Opt = ' --languages=c --langmap=c:+.h --extra=+q'
let g:MP_Write_AutoUpdate = 1
let g:MP_Bufread_AutoLoad = 1
let g:MP_Load_Enable = 1
let g:MP_Source_File_Ext_Name = 'c,h,hp,def'


" " 项目文件名
" let g:MyProjectFileName = 'test project'
" " 是否启用ctags
" let g:MP_Ctags_Enable = 1
" " 是否启用cscope
" let g:MP_Cscope_Enable = 1
" " 定义ctags的路径
" let g:MP_Ctags_Path = 'ctags'
" " 定义cscope的路径
" let g:MP_Cscope_Path = 'cscope'
" "设置grep的路径
" " Tips: 如果是在windows下使用cygwin的grep的话，搜索结果中经常会出现警告，需要在系统中添加一个名叫CYGWIN，值为nodosfilewarning的环境变量
" let g:MP_Grep_Path = 'grep'
" " 定义ctags参数,比如c++项目可以在project.vim中定义"--c++-kinds=+px"
" let g:MP_Ctags_Opt = ''
" " 在文件写入时是否自动更新tags
" let g:MP_Write_AutoUpdate = 1
" " 是否自动载入项目文件
" let g:MP_Bufread_AutoLoad = 1
" " 是否允许更新tags(适合临时设置禁用或启用)
" let g:MP_Update_Enable = 1
" " 是否允许载入tags(适合临时设置禁用或启用)
" let g:MP_Load_Enable = 1
" " 需要建立tags的文件后缀名(可以针对不同项目在各自的project.vim文件中定义)
" let g:MP_Source_File_Ext_Name = 'c,h,hp,def'

