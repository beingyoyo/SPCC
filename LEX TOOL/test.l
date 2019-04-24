%{
	int key = 0, op = 0, id = 0, relop = 0, constant = 0, otherop = 0;
%}
letter [a-zA-Z]
digit [0-9]

%%
(begin|if|while|do|else) {key++;}
("+"|"-"|"*"|"/"|"=") {op++;}
("<"|"<="|">="|"!="|">") {relop++;}
(":="|"&"|"&&"|"|"|"||") {otherop++;}
{letter} ({letter}{digit})* {id++;}
({digit})+ {constant++;}
[ \t] {}
%%

int main()
{
	yylex();
	printf("Key:%d\n Operator:%d\n Relop:%d\n Id:%d\n Constant:%d\n Otherop:%d\n", key, op, relop,id,constant, otherop);
	return 0;
}