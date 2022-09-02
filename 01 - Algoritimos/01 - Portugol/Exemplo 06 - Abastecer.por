programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{

	real qtdeDin, valComb, qtdeLitros
	escreva("Quanto custa o litro de combustível? R$")
	leia(valComb)
	escreva("Quantos reis você tem? R$ ")
	leia(qtdeDin)
	qtdeLitros=qtdeDin/valComb
	escreva("Com R$", qtdeDin," você consegue abastecer ", 
	mat.arredondar(qtdeLitros,2)," litros de combustível.")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 297; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */