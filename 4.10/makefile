tarai :	do test0p test0j #do test0p test0jを網羅したらこれを実行せよ
	python tarai.py

do : test0.o #実行データを実行する
	./test0

test0.o : test0.c #コンパイルする
	gcc -o test0 test0.c

test0p : # いんたプリンタでファイルを読み込むアンド実行
	python test0.py

test0j : # java
	javac test0.java
	java test0

