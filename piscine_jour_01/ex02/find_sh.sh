resultat= find -E . -regex "(./.*\.sh$)" |
	sed "s/ *.sh//g" |
	sed "s/\.\///g"  |
	sed "s/.*\///g"
