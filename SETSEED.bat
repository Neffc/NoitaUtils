echo off
cls
echo Enter desired seed...
set /P _seed=
echo ^<MagicNumbers > magic.txt
echo   WORLD_SEED=%_seed% >> magic.txt
echo   _DEBUG_DONT_LOAD_OTHER_MAGIC_NUMBERS=1 >> magic.txt
echo   _DEBUG_DONT_SAVE_MAGIC_NUMBERS=1 ^> >> magic.txt
echo ^</MagicNumbers^> >> magic.txt
echo Starting noita.exe with the seed %_seed%

noita.exe -no_logo_splashes -magic_numbers magic.txt