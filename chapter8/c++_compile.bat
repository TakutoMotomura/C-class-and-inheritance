@echo off

cd ./

:hajime

set /p compilefiles=�R���p�C������t�@�C�������:
set /p exefilename=���s�t�@�C���������:
set /p do_yn=�R���p�C�����s[Y/N]:

setlocal EnableDelayedExpansion

if %do_yn%==y (
 g++ -o %exefilename%.exe %compilefiles%
 echo ---------------------------------------------------
 %exefilename%.exe
 echo ---------------------------------------------------
) else (
 set /p yarinaoshi=��蒼��[Y/N]:
 if !yarinaoshi!==y ( 
 echo ---------------------------------------------------
 goto :hajime
 ) else (
  echo -----------
  echo ���~���܂�
  echo -----------
 )
)
pause

endlocal