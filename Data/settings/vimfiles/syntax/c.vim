"========================================================
" Highlight All Function
"========================================================
syn match   cFunction "\<[a-zA-Z_][a-zA-Z_0-9]*\>[^()]*)("me=e-2
syn match   cFunction "\<[a-zA-Z_][a-zA-Z_0-9]*\>\s*("me=e-1
hi cFunction        guifg=#009933   guibg=NONE      gui=bold

"========================================================
" Highlight All Math Operator
"========================================================
" C math operators
syn match       cMathOperator     display "[-+\*/%=]"
" C pointer operators
syn match       cPointerOperator  display "->\|\."
" C logical   operators - boolean results
syn match       cLogicalOperator  display "[!<>]=\="
syn match       cLogicalOperator  display "=="
" C bit operators
syn match       cBinaryOperator   display "\(&\||\|\^\|<<\|>>\)=\="
syn match       cBinaryOperator   display "\~"
syn match       cBinaryOperatorError display "\~="
" More C logical operators - highlight in preference to binary
syn match       cLogicalOperator  display "&&\|||"
syn match       cLogicalOperatorError display "\(&&\|||\)="

" Math Operator
hi cMathOperator            guifg=#009933   guibg=NONE
hi cPointerOperator         guifg=#009933   guibg=NONE
hi cLogicalOperator         guifg=#009933   guibg=NONE
hi cBinaryOperator          guifg=#009933   guibg=NONE
hi cBinaryOperatorError     guifg=#009933   guibg=NONE
hi cLogicalOperator         guifg=#009933   guibg=NONE
hi cLogicalOperatorError    guifg=#009933   guibg=NONE
