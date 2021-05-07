@echo off

cd ./

:hajime

set /p compilefiles=コンパイルするファイルを入力:
set /p exefilename=実行ファイル名を入力:
set /p do_yn=コンパイル実行[Y/N]:

setlocal EnableDelayedExpansion

if %do_yn%==y (
 g++ -o %exefilename%.exe %compilefiles%
 echo ---------------------------------------------------
 %exefilename%.exe
 echo ---------------------------------------------------
) else (
 set /p yarinaoshi=やり直す[Y/N]:
 if !yarinaoshi!==y ( 
 echo ---------------------------------------------------
 goto :hajime
 ) else (
  echo -----------
  echo 中止します
  echo -----------
 )
)
pause

endlocal